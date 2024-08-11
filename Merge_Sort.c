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
        Left[i] = arr[low + i];
    for(j = 0 ; j < n2 ; j++)
        Right[j] = arr[mid + j + 1];

    i = 0 , j = 0 , k = low;
    while (i < n1 && j < n2)
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
        k++;
    }

    while (i < n1) 
    {
        arr[k] = Left[i];
        i++;
        k++;
    }

    while (j < n2) 
    {
        arr[k] = Right[j];
        j++;
        k++;
    }
}
    
void merge_sort(int arr[] , int low , int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        merge_sort(arr , low , mid);
        merge_sort(arr , mid + 1 , high);
        merge(arr , low , high , mid);
    }
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

    return 0;
}