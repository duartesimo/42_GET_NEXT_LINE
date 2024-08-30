# 42_GET_NEXT_LINE
Reading a line from a fd is way too tedious

# About
This project is part of the Rank 01 from 42 Common Core and focuses on creating a function designed to read a single line, delimited by a newline character, by accepting a file descriptor as a parameter. It offers a dynamic and efficient solution for processing and retrieving lines from diverse input sources, including files. When called in a loop, `get_next_line` returns all the contents of the file, one line at a time until the end of the file is reached. Also, this function works with any size of buffer size specified (as the subject asks).

# Prototype
```c
char	*get_next_line(int fd);
```
 - `fd` -> File descriptor indicating the source to read the line from.

# Challenges and Learning Objectives
 - **Static Variable Implementation**: Through this project, we gained valuable insights into implementing static variables within functions, enhancing our understanding of efficient memory management and function behavior.
 - **File Descriptor Implementation**: We learned to effectively utilize file descriptors (fd) in our project, expanding our knowledge of handling input sources and enhancing overall program efficiency.
 - **Macro Implementation**: Understanding the use of macros in functions, such as defining values like `BUFFER_SIZE` in our header file, allowed for flexible and easily adjustable code configurations.
