P=what-is-iot
# Madrid Pittsburgh boxes
SLIDE_THEME=boxes
PDFS=$(P)-text.pdf $(P)-slides.pdf
HTMLS=$(P)-reveal.html

RUN_PP_BEAMER=pp -DBEAMER
RUN_PANDOC_BEAMER=pandoc -f markdown -t beamer --highlight-style=pygments -V theme:$(SLIDE_THEME) \
				  --pdf-engine=xelatex
RUN_PANDOC_REVEALJS=pandoc -f markdown -t revealjs -s -V revealjs-url=./bower_components/reveal.js
RUN_PANDOC_TEXT=pandoc -f markdown --pdf-engine=xelatex

all: $(PDFS) $(HTMLS)

slides: $(P)-slides.pdf $(P)-slides.tex
html: $(P)-reveal.html
.PHONY: html slides

clean:
	rm -f $(PDFS) $(HTMLS)

spell: .$(P).md.spell

.$(P).md.spell: $(P).md

.%.spell: %
	aspell --home-dir=. --personal=dictionary.txt --lang=en_US check $<
	touch $@

$(P).md: Makefile
	@touch $@

%.beamer.md: %.md
	$(RUN_PP_BEAMER) < $< > $@

%-text.pdf: %.beamer.md
	$(RUN_PANDOC_TEXT) -o $@ $<

%-slides.pdf: %.beamer.md
	$(RUN_PANDOC_BEAMER) -o $@ $<

%-slides.tex: %.beamer.md
	$(RUN_PANDOC_BEAMER) -o $@ $<

%-reveal.html: %.md
	$(RUN_PANDOC_REVEALJS) -o $@ $<

images/%.pdf: images/%.tex | Makefile
	xelatex -output-directory=images $<
#	pdfcrop $@
#	mv $(patsubst %.pdf,%-crop.pdf,$@) $@

# Dependencies
$(P).md: images/IP-Header_eng.pdf
$(P).md: images/ip-header.pdf
$(P).md: images/ip-header.svg
