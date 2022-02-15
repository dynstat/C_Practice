#include <stdio.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target)
{
    int *ret = malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++)
    {

        for (int j = i; j < numsSize; j++)
        {
            if (j == i)
                continue;
            if (nums[i] + nums[j] == target)
            {
                ret[0] = i;
                ret[1] = j;
                break;
            }
        }
    }
    return ret;
}
int main()
{
    int arr[4] = {2, 7, 11, 15};

    int *output = twoSum(arr, 4, 9);
    printf("%d %d\n", output[0], output[1]);

    free(output);
    return 0;
}