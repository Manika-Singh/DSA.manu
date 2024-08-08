#include <stdio.h>

void swap (int *a , int *b);
void Quick_Sort(int array[] ,int low , int high);
int Partition(int arr[] , int low , int high);

void swap(int *a , int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void Quick_Sort(int array[] ,int low , int high)
{
    if (low < high)
    {
        int j = Partition(array , low , high);
        Quick_Sort(array , low , j);
        Quick_Sort(array , j + 1 , high);
    }
}

int Partition(int arr[] , int low , int high)
{
    int Pivot = arr[low];
    int i = low , j = high ;

    while (i < j)
    {
        do{
            i++;
        } while (arr[i] > Pivot);

        do{
            j--;
        } while (arr[j] < Pivot);

        if (i < j)
            swap(&arr[i] , &arr[j]);
    }
    swap(&arr[j] , &arr[low]); 
    return j;
}

void printArray(int arr[], int size) 
{  
    int i;  
    for (i = 0; i < size; i++)  
        printf("%d ", arr[i]);  
    printf("\n");  
}  

int main()
{
    int arr[] = {10 , 1 , 13 , 16 , 8 , 2 , 4 , 7 , 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    Quick_Sort(arr , 0 , n - 1);

    printf("Sorted Array : \n");
    printArray(arr , n);
    

    return 0;
}