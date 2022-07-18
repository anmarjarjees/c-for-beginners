// Single line comment in C language => c-for-beginners

/*
Multiple lines of Comment
in C language
*/

/*
In order to start coding with C language, we need to include some tools
these tools are called "libraries" in programming language

For example to add the functionality of input/insert any value to our program
or to output/print any value from our a program, we need to include a standard tool/library for input/ouput named "stdio"
this library needs to be included in the header so it has the extension .h

The full c syntax for adding a "header" for the "standard" "input" and "output" library
#include<stdio.h>

This first line/code of any program is a preprocessor command,

Notice that since we need to input and output values in this course or in any simple c language program,
So will keep including this library when we start any new program
*/

#include <stdio.h>

/*
C language code need to have a main function to run any program.
The function "main()"" is the main function where the program execution begins

Function Syntax:

Data-Type functionName() {
    // you code goes here...

    return ...
}

Data-Type => will be the type of the value that this function will return which is an integer value "int"
This function has empty parenthesis () => doesn't take any parameter
in between { and }, write your program
*/
int main()
{
    /*
    My first line of code using C language to print something:
    using another built-in function "printf" that accepts the text "Hello, World!" as an argument to be printed:
    */
    printf("Hello, World! \n");

    /*
    NOTE:
    This function has "int" => it's supposed to return an integer value otherwise it will generate an error
    so we can just return 0
    */

    return 0;
}