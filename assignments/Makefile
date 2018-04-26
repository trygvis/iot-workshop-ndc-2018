AS=blink-a-led mqtt

PDFS=$(foreach A,$(AS),$(A)/$(A).pdf)

all: README.pdf $(PDFS)

README.pdf: README.md
define A_PATTERN
$(1)/$(1).pdf: $(1)/$(1).md
endef
$(eval $(foreach A,$(AS),$(call $(A_PATTERN),$(A))))

%.pdf: %.md
	@echo pandoc $<
	@cd $(dir $<); pandoc $(notdir $<) -o $(notdir $@)

#$(patsubst )/%,%,$<) -o $(patsubst $(DIR)/%,%,$@)
