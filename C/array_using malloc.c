// Trying to create 2D array dynamically using pointers

#include <stdio.h>
#include <malloc.h>
int main()
{
    int *pool, **pool2, r = 3, c = 4;  /* r and c corresponds to rows and columns respectively */

    pool = (int *)calloc((r * c), sizeof(int)); /* creating all the blocks of int of 2D array*/
    pool2 = (int **)calloc(r, sizeof(int *));  /* using double pointers same as the number of rows with a thought of storing base addresses of each row*/

    int count = 0;
    for (int k = 0; k <= (r - 1); k++)
    {
        pool2[k][0] = &pool[count]; /* my query here : Since pool is of (int *) type, pool2 (being a double pointer) should be able to store the address of pool.*/

     // pool2[k] = &pool[count]; /* <------ BUT This WORKS FINE (after un-commenting)... instead of the above line !! */

        for (int m = 0; m <= (c - 1); m++)
        {
            printf("pool2[%d][%d] = %d\n", k, m, pool2[k][m]);
        }

        count += c; /* count increases to give the address of first block of the row (using &pool[count])*/
    }
    
    // freeing the dynamically allocated memory
    free(pool); 
    free(pool2);

    return 0;
}
