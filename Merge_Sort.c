#include <stdio.h>

// Function to print array
void print_array(int a[] , int n)
{
    for(int i = 0 ; i < n ; i++)
        printf("%d " , a[i]);
    printf("\n");
}

// Function for merging the divided array while sorting them

void merge(int arr[] , int low , int high , int mid)
{
    // With the given value of mid, defining lengths of two new arrays Left & Right
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int i  , j , k;
    int Left[n1] , Right[n2];

    for(i = 0 ; i < n1 ; i++)
        Left[i] = arr[low + i];
    for(j = 0 ; j < n2 ; j++)
        Right[j] = arr[mid + j + 1];

    // Comparing the values of Left and Right array index wise 
    // and reading the values back into the sorted array

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

    // When no values of any of the array is left to compare then rest of the values
    // (of left or right array which is still left) are copied in the sorted array
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

// To find the middle position in array and dividing it there.
// and calling the function recursively till the elements are sole and can't be divided further
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