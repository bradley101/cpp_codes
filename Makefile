.PHONY: clean All

All:
	@echo "----------Building project:[ cpp codes - Debug ]----------"
	@"$(MAKE)" -f  "cpp codes.mk"
clean:
	@echo "----------Cleaning project:[ cpp codes - Debug ]----------"
	@"$(MAKE)" -f  "cpp codes.mk" clean
