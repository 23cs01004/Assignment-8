#include <stdio.h>

void reverse(int arr[], int size)
{
    for (int i=0; i<size/2; i++)
    {
        int temp = *(arr+i);
        *(arr+i)=*(arr + size -1 -i);
        *(arr + size -1 -i)= temp;
    }

}

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: ");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverse(arr, size);
    for (int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
