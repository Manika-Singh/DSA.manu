//BUBBLE SORT (piche se sort hota h)

#include <stdio.h>

int main()
{
  int arr[10] = {12 , 16 , 8 , 3 , 9 , 34 , 1 , 4 , 33 , 2};

  int i , j , n = 10 , temp;

  for (i = 0 ; i < n - 1 ; i++)
  { 
    for(j = 0 ; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j+1])
      {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp; 
      }
    }
  }

  for(i = 0 ; i < 10 ; i++)
  {
    printf("%d " ,arr[i]);
  }

  return 0;
}