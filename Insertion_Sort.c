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
        // Value of arr[i] is copied in temp 
        temp = arr[i];
        j = i - 1;

        // index value from one preceding i is compared to arr[i] and when then the
        //value keeps swapping till the condition meet amd then finally value of arr[i] stored in temp is replaced
        while (j >= 0 && temp <= arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    printArray(arr , n);
}