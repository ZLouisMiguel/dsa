.PHONY: clean

clean:
	@echo "Cleaning all .exe files"
ifeq ($(OS),Windows_NT)
	@powershell -NoProfile -Command "Get-ChildItem -Path . -Recurse -File -Filter '*.exe' | Remove-Item -Force"
else
	@find . -type f -name "*.exe" -delete
endif
	@echo "Clean up complete!"
