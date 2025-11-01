

#include <stdio.h>

int sorted(int arr[], int i, int j)

{
    if (i>=j)
    {
        return 1;
    }

    if (arr[i] > arr[i + 1])
    {
        return 0;
    }

    return sorted(arr, ++i ,j);
}

int main()
{
    int arr[4] = {1, 8, 3, 4};
    int Index = 0;
    int lastIndex=3;
    int data = sorted(arr, Index,lastIndex);
    if (data == 1)
    {
        printf("Sorted");
        
    }
    else
    {
        printf("Not Sorted");
    }
}