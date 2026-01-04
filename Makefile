build:
	meson setup build -Dbuildtype=debugoptimized
	meson compile -C build

run: build
	@build/tetris

watch:
	find src -name '*.c' | entr -r make run
