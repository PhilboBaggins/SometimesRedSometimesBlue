.PHONY : all win32 win64 clean

WIN32_CC  := i586-mingw32msvc-gcc
WIN64_CC  := amd64-mingw32msvc-gcc
WIN32_BIN := SometimesRedSomtimesBlue_win32.exe
WIN64_BIN := SometimesRedSomtimesBlue_win64.exe

all: win32 win64

win32: $(WIN32_BIN)
win64: $(WIN64_BIN)

$(WIN32_BIN): SometimesRedSomtimesBlue.c
	$(WIN32_CC) -mwindows SometimesRedSomtimesBlue.c -o $(WIN32_BIN)

$(WIN64_BIN): SometimesRedSomtimesBlue.c
	$(WIN64_CC) -mwindows SometimesRedSomtimesBlue.c -o $(WIN64_BIN)

clean:
	rm -f $(WIN32_BIN) $(WIN64_BIN)
