#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void)
{
    int i,j,k;

    int input;
    
	printf("Please enter an ODD integer:");
    scanf("%d",&input);
    
	for(i=0; i<input; i++)
    {
        k = input-i;
        if(i==(input == -1) || i == 0)
        {
            for(j=1; j<=input; j++)
            {
                printf("o");
            }
        }

        else if(i == input/2)
        {
            for(j=1; j<=input; j++)
            {
                if(j == 1 || j==input)
                    printf("o");

                else
                    printf(" ");
            }
        }

        else
        {
            for(j=1; j<=input; j++)
            {
                if(j != (input/2)+1)
                {
                    printf("o");
                }
                else
                    printf(" ");
            }
        }




        printf("\n");
    }

    return(0);
}
