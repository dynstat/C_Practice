#include <stdio.h>
int main()
{
    char array[4][10];

    for (int i = 0; i <= 3; i++)
    {
        printf("Enter the name\n");
        fgets(&array[i][0], 10, stdin);
    }
    for (int i = 0; i <= 3; i++)
    {
        printf("%s\n", array[i]);
    }
}

// TO DO...

// storage classes ---> auto, static, extern, register.
// typedef ---> to give a new name to data types. Ex.    typedef int newint
// Preprocessor directives ---> #define, #include, #endif, etc
// Structures ---> struct
// File handling ---> using FILE pointer
