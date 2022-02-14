// read the contents of an already created text file.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char box[100];
    int y;

    FILE *ptr;
    ptr = fopen("s.txt", "r");

    // if (ptr == NULL)
    // {
    //     printf("failed..\n");
    //     exit(EXIT_FAILURE);
    // }
    while (fgets(&box[0], 100, ptr) != NULL)
    {
        // printf("%s", box);
        puts(box);
    } // to read the contents from the file using its FILE pointer.

    // puts(box);
}
