AS = 
AS += blink-a-led
AS += mqtt
AS += mqtt2
AS += mqtt3
AS += read-a-button
AS += read-temperature

PDFS=$(foreach A,$(AS),$(A)/$(A).pdf)

all: README.pdf $(PDFS)

README.pdf: README.md
define A_PATTERN
$(1)/$(1).pdf: $(1)/$(1).md
endef
$(eval $(foreach A,$(AS),$(call $(A_PATTERN),$(A))))

clean:
	@rm -f $(wildcard $(PDFS))

%.pdf: %.md
	@echo pandoc $<
	@pandoc --resource-path=$(dir $<) -f markdown -o $@ < $<

#$(patsubst )/%,%,$<) -o $(patsubst $(DIR)/%,%,$@)
