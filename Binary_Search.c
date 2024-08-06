//BINARY SEARCH

#include <stdio.h>

int main()
{
  int arr[10] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};
  
  int start = 0 , end = 10 ;
  int mid;
  int j = 9;

  while (start < end)
  {
    mid = start + (end - start) / 2; 

    if (arr[mid] == j)
    {
      printf("Element %d found at index %d" , j , mid);
      break;
    }
    else if (arr[mid] < j)
    {
      start = mid + 1;
    }
    else if (arr[mid] > j)
    {
      end = mid - 1;
    }
  }
  return 0;
}