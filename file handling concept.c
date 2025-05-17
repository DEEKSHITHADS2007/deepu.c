File Handling in C
File handling allows reading from and writing to files.
* Types of Files
1. Text Files: Store data in human-readable format.
2. Binary Files: Store data in binary form
*File Operations
1. Opening a File:
FILE *file_pointer = fopen("filename", "mode");
Modes: "r" (read), "w" (write), "a" (append).
Closing a File:
Reading and Writingg to Files:
● Writing to a File:
fprintf(file_pointer, "Text");
fputs("Text", file_pointer);
Reading from a File:
fscanf(file_pointer, "format_specifier", &variable);
fgets(buffer, size, file_pointer);
