#include <stdio.h>

void print_array(int a[] , int n)
{
    for(int i = 0 ; i < n ; i++)
        printf("%d " , a[i]);
    printf("\n");
}

void merge(int arr[] , int low , int high , int mid)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int i  , j , k;
    int Left[n1] , Right[n2];

    for(i = 0 ; i < n1 ; i++)
        Left[i] = arr[low + i - 1];
    for(j = 0 ; j < n2 ; j++)
        Right[j] = arr[mid + j];

    i = 0 , j = 0;
    for(k = low ; k < high ; k++)
    {
        if (Left[i] < Right[j])
        {
            arr[k] = Left[i];
            i++;
        }
        else
        {
            arr[k] = Right[j];
            j++;
        }
    }
    
}

void merge_sort(int arr[] , int low , int high)
{
    int mid;
    while (low < high)
    {
        mid = (low + high) / 2;
        merge_sort(arr , low , mid);
        merge_sort(arr , mid + 1 , high);
    }
    merge(arr , low , high , mid);
}

int main()
{
    int arr[] = {7 , 4 , 8 , 2 , 1 , 9 , 0 , 3 , 6 , 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before Sorting : \n");
    print_array(arr , n);

    merge_sort(arr , 0 , n);

    printf("After Sorting : \n");
    print_array(arr , n);
}