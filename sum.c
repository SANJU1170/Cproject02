#include<stdio.h>
add()
{
  int Number, i, Sum = 0;
  
  printf("\nPlease enter any Integer Value\n");
  scanf("%d", &Number);
  
  for(i = 1; i <= Number; i++)
  {
     Sum = Sum + i;
  }
  
  printf("Sum of Natural Numbers = %d", Sum);
 //return 0;
}
