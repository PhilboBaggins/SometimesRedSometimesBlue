EXECUTABLE := SometimesRedSometimesBlue.exe

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): Program.cs
	gmcs -r:System.Windows.Forms.dll -r:System.Drawing.dll -out:$(EXECUTABLE) Program.cs

clean:
	rm -f $(EXECUTABLE)
