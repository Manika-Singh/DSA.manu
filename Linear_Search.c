//LINEAR SEARCH

#include <stdio.h>

int main()
{
  int arr[] = {1 , 9 , 7 , 2 , 3 , 5};
  int k = 3;

  int i;

  for (i = 0 ; i < 6 ; i++)
  {
    if (arr[i] == k)
    {
      printf("Element %d found at index %d." , k , i);
      break;
    }
  }
}
