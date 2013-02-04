EXECUTABLE := SometimesRedSometimesBlue.exe

$(EXECUTABLE): Program.cs
	gmcs -r:System.Windows.Forms.dll -r:System.Drawing.dll -out:$(EXECUTABLE) Program.cs
#	gmcs -pkg:dotnet -out:$(EXECUTABLE) Program.cs

.PHONY : clean
clean:
	rm -f $(EXECUTABLE)
