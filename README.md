# About

The format, described by Mudge [here](https://youtube.com/watch?v=gfYswA_Ronw), asks that the operator construct an COFF file using a mingw-w64 compiler or the msvc compiler that holds an symbol name indicating its entrypoint, and underlying function calls. Using this, beacon's inline execute will pass the the specified arguments to the entrypoint, and allow the file to take control over beacons thread to perform any actions, whilst also blocking any further activity until the function has continued.

## Why The Template ?

Personally, because I prefer to keep myself organized, I like to seperate my project files into multiple files and headers, both containg various function required for my project to operate properly. As such, I wanted a quick and easy Makefile solution that would take a list of source files within my [source](source) directory, and compile them into x86/x64 object files, that would then be combined with the linker into a single file object compatible with Beacon's BOF format.
