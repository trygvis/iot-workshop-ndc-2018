P=connected-arduino
# Madrid Pittsburgh boxes
SLIDE_THEME?=boxes
PDFS=$(P)-text.pdf $(P)-slides.pdf
HTMLS=$(P)-reveal.html

BUILD_DIR=build
TEMPLATE_DIR=templates
TEMPLATE_BEAMER=$(TEMPLATE_DIR)/beamer.tex
ifeq (1,$(QUICK))
PP_DEFS+=QUICK
PDF_ENGINE   = xelatex
#PANDOC_ARGS += --no-highlight
PANDOC_ARGS += --highlight-style=pygments
else
PDF_ENGINE   = xelatex
PANDOC_ARGS += --highlight-style=pygments
endif

RUN_PP_BEAMER=pp -DBEAMER $(patsubst %,-D%,$(PP_DEFS))
RUN_PP_REVEALJS=pp -DREVEALJS $(patsubst %,-D%,$(PP_DEFS))
RUN_PANDOC_BEAMER=pandoc -f markdown -t beamer $(PANDOC_ARGS) -V theme:$(SLIDE_THEME) \
				  --pdf-engine=$(PDF_ENGINE) --template=$(TEMPLATE_BEAMER) -V toc-depth:4
RUN_PANDOC_REVEALJS=pandoc -f markdown -t revealjs -s -V revealjs-url=./bower_components/reveal.js
RUN_PANDOC_TEXT=pandoc -f markdown --pdf-engine=$(PDF_ENGINE)

all: toc.md $(PDFS)

slides: $(P)-slides.tex $(P)-slides.pdf
html: $(P)-reveal.html
.PHONY: html slides

clean:
	rm -f $(PDFS) $(HTMLS)

toc.md: $(P).md
	grep '^#' $< | sed -e 's,^# ,* ,' -e 's,^## ,    * ,' > $@

spell: .$(P).md.spell

.%.spell: %
	aspell --home-dir=. --personal=dictionary.txt --lang=en_US check $<
	touch $@

$(P).md: Makefile
	@touch $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

%.beamer.md: %.md
	$(RUN_PP_BEAMER) < $< > $@

$(BUILD_DIR)/%.beamer.md.d: %.md | $(BUILD_DIR)
	$(RUN_PP_BEAMER) -M $< < $< > $@

%-text.pdf: %.beamer.md
	$(RUN_PANDOC_TEXT) -o $@ $<

%-slides.pdf: %.beamer.md $(TEMPLATE_BEAMER)
	$(RUN_PANDOC_BEAMER) -o $@ $<

%-slides.tex: %.beamer.md $(TEMPLATE_BEAMER)
	$(RUN_PANDOC_BEAMER) -o $@ $<

%.revealjs.md: %.md# $(BUILD_DIR)/%.revealjs.md.d
	$(RUN_PP_REVEALJS) < $< > $@

$(BUILD_DIR)/%.revealjs.md.d: %.md | $(BUILD_DIR)
	$(RUN_PP_REVEALJS) -M $< < $< > $@

%-reveal.html: %.revealjs.md
	$(RUN_PANDOC_REVEALJS) -o $@ $<

images/%.pdf: images/%.tex | images/pp-template Makefile
	images/pp-template < $< > $(patsubst %.tex,%-full.tex,$<)
	xelatex -output-directory=images $(patsubst %.tex,%-full.tex,$<)
	mv $(patsubst %.pdf,%-full.pdf,$@) $@

$(TEMPLATE_BEAMER): $(dir $(TEMPLATE_BEAMER))
	pandoc --print-default-template=beamer > $@

$(dir $(TEMPLATE_BEAMER)):
	mkdir -p $@

-include $(BUILD_DIR)/$(P).beamer.md.d
-include $(BUILD_DIR)/$(P).revealjs.md.d
