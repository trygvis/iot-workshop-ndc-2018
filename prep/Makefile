MARKDOWNS = prep.md
BUILD := build

RUN_PP=pp

prep.pdf: prep.md $(filter-out prep.md,$(MARKDOWNS))
	pandoc -o $@ $^

$(BUILD)/%.md.d: %.md Makefile | $(BUILD)
	$(RUN_PP) -M $< < $< > $@

$(BUILD):
	mkdir $@

-include $(MARKDOWNS:%.md=$(BUILD)/%.md.d)
