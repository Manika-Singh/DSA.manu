//INSERTION SORT

#include <stdio.h>

void printArray(int a[] , int n)
{
    int i;
    printf("Sorted Array: \n");
    for(i = 0 ; i < n ; i++)
        printf("%d " , a[i]);
}

int main()
{
    int arr[] = {6 , 8 , 3 , 9 , 2 , 5 , 1 , 4};
    int i , j , temp;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (i = 0 ; i < n ; i++)
    {
        temp = arr[i];
        j = i - 1;

        while (j >= 0 && temp <= arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    printArray(arr , n);
}