//SELECTION SORT

#include <stdio.h>

int main()
{
    int arr[9] = {4 , 7 , 2 , 9 , 3 , 1 , 8 , 6 , 5};
    int n = 9 , i , j , min , temp;

    for (i = 0 ; i < n ; i++)
    {
        min = i;

        for(j = i ; j <= n ; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }    
        }
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
               
    }

    for (i = 0 ; i < n ; i++)
    {
        printf("%d " , arr[i]);
    }

    return 0;
}