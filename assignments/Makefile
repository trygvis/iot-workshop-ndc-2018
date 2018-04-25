AS=blink-a-led

PDFS=$(foreach A,$(AS),$(A)/$(A).pdf)

all: README.pdf $(PDFS)

README.pdf: README.md
$(eval $(foreach A,$(AS),$(A)/$(A).pdf: $(A)/$(A).md))

%.pdf: %.md
	cd $(dir $<); pandoc $(notdir $<) -o $(notdir $@)

#$(patsubst )/%,%,$<) -o $(patsubst $(DIR)/%,%,$@)
