#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void)
{
	int i, j, k;  

  scanf("%d", &i);

  for (k = 1; k <= i; k++)
  {
    for (j = 1; j <= i-k; j++)
      printf(" ");

    for (j = 1; j <= 2*k-1; j++)
      printf("*");

    printf("\n");
  }

  for (k = 1; k <= i - 1; k++)
  {
    for (j = 1; j <= k; j++)
      printf(" ");

    for (j = 1 ; j <= 2*(i-k)-1; j++)
      printf("*");

    printf("\n");
  }
	
	
	return 0;
}
