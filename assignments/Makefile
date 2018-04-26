AS = 
AS += blink-a-led
AS += read-temperature
AS += mqtt
AS += mqtt2
AS += mqtt3

PDFS=$(foreach A,$(AS),$(A)/$(A).pdf)

all: README.pdf $(PDFS)

README.pdf: README.md
define A_PATTERN
$(1)/$(1).pdf: $(1)/$(1).md
endef
$(eval $(foreach A,$(AS),$(call $(A_PATTERN),$(A))))

clean:
	@rm $(wildcard $(PDFS))

%.pdf: %.md
	@echo pandoc $<
	@cd $(dir $<); pandoc $(notdir $<) -o $(notdir $@)

#$(patsubst )/%,%,$<) -o $(patsubst $(DIR)/%,%,$@)
