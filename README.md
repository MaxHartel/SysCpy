****************
* Febuary 17 2023
**************** 

# Simple File Copy
OVERVIEW:
 A C program that only uses only standard system calls to copy the contents of one file to another file.


INCLUDED FILES:

 * syscpy.c - source file
 * syscpy.o - executable file
 * target.txt - input testing file
 * Makefile - building and running script for syscpy
 * targetCopy.txt - output testing file
 * README - this file


COMPILING AND RUNNING:

 From the directory HW01 containing all files, compile the .c file with the command:
### $ make clean

 Run the compiled .o file using the JSON script with the command:
### $ make run

or

You can run the .o file directly from the command line with:
### $ ./syscpy.o <input_file> <output_file>

 Console output will give the results after the program finishes.

I aknowledge that my design using the makefile to build and compile 
the project differs from the project outline, but I felt that this
methof of running the project made for cleaner and easier use and testing of the program.

PROGRAM DESIGN AND IMPORTANT CONCEPTS:

For this project I had to use only the open() (SYS_open), close() (SYS_close), read()(SYS_read) and write()(SYS_write) system calls. As well as a few other calls for the purpose of error handling that were not significant to the project's main function.


TESTING:

 
* target.txt  - sample input file
* targetCopy.txt  - sample input file

My program is guarded against bad user input with error checking using errno and perror, the prograg uses these to display a helpful error message in the event of an error.

To test my program I preformed the 'diff' command on the origional file and its copy produced by my program. The result was no difference between the files.

To the extent of my knowledge and testing the program functions as intended with no  errors or warnings.



DISCUSSION:
 
 This was great project to get back into seriously programming with after taking
about a month off for the winter holidays. Through working on this project I was able
to knock the rust off of my C skills. That being said this project was by no means 
a walk in the park for an introduction as I was unfamilliar with system calls and as a result had a great learning experience from this project.  
----------------------------------------------------------------------------
