.DEFAULT_GOAL = help
BUILD_DIR := build

all: build run
build: $(BUILD_DIR)/Makefile
	cd $(BUILD_DIR) && $(MAKE)
$(BUILD_DIR)/Makefile: createdir
	cd $(BUILD_DIR) && cmake ..
createdir:
	mkdir -p $(BUILD_DIR)
run:
	cd $(BUILD_DIR) && ./main
clean:
	rm -rf $(BUILD_DIR)

.PHONY: help
help:
	@echo "-------------------- USAGE --------------------"
	@echo ""
	@echo "all"
	@echo "		build & run"
	@echo ""
	@echo "build"
	@echo "		build project"
	@echo ""
	@echo "run"
	@echo "		run project"
	@echo ""
	@echo "clean"
	@echo "		clean project"
	@echo ""
