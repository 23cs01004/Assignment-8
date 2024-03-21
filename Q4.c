#include <stdio.h>

int twice(int *nums, int size)
{
    for (int i=0; i<size-1; i++)
    {
        for (int j=i+1; j<size; j++)
        {
            if (*(nums+i) == *(nums +j))
            {
                printf("%d", *(nums+i));
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int nums[n+1];
    printf("Enter array elements: ");
    for (int i=0; i<n+1; i++)
    scanf("%d", &nums[i]);
    twice(nums, n+1);
    return 0;
}