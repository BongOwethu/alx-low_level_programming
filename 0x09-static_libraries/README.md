# Static libaries in C
## This is a readme file for the tasks in the **0x09 C - Static libraries**.
### What is a Static Library?
- A static library, also known as an archive, is a file that contains precompiled object code. It is a collection of object files that have been bundled together for easier distribution and linking with other programs. When you create a static library, it combines multiple object files into a single file, making it easier to distribute and reuse code.

### Here's a general overview of how a static library works:
**Compilation** 
- First, you compile the source code files into object files using a compiler. This step generates the individual object files for each source file. For example, if you have `file1.c` and `file2.c`, you would compile them into `file1.o` and `file2.o`, respectively.

**Archiving**
- Next, you create a static library by combining the object files into a single file. This is typically done using the ar (archiver) utility, which is available on most Unix-like systems. For example, you can create a static library called `mylib.a` by running the command `ar rcs mylib.a file1.o file2.o`.

**Usage**
- To use the static library in your own program, you need to include its header file(s) in your source code and link against the library during the compilation process. You can include the header file(s) using the #include directive. When compiling, you specify the library using the -l flag, followed by the name of the library (without the lib prefix and file extension). For example, to compile a program named `myprogram.c` that uses `mylib.a`, you would run `gcc -o myprogram myprogram.c -lmylib`.

*To summarize the steps to create and use a static library:*
1) Compile the source code files into object files.
2) Create the static library by archiving the object files.
3) Include the library's header file(s) in your source code.
4) Link against the library during compilation using the -l flag.


[0. A library is not a luxury but one of the necessities of life](libmy.a)
- Create the static library libmy.a containing all the functions listed below:
- If you haven’t coded all of the above functions create empty ones with the right prototype.
- Don’t forget to push your main.h file to your repository. It should at least contain all the prototypes of the above functions.

[1. Without libraries what have we? We have no past and no future](create_static_lib.sh)

- Create a script called `create_static_lib.sh` that creates a static library called `liball.a` from all the `.c` files that are in the current directory.

