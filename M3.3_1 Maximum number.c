//1. Write a program to find out the max number from given array using function
#include <stdio.h>
 main()
{
  int array[50], size, c, l = 0;

  printf("\n\n\t Enter the number of elements in array");
  scanf("%d", &size);

  printf("\n\n\t Enter %d integers\n", size);

  for (c = 0; c < size; c++)
    scanf("%d", &array[c]);

  for (c = 1; c < size; c++)
    if (array[c] > array[l])
      l = c;

  printf("\n\n\t Maximum element is present at array location %d and its value is %d", l+1, array[l]);

}
