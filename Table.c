#include<stdio.h>
int main()
{
    int integer,n=1;
    printf("\nGive me an integer :");
    scanf("%d",&integer);
    if (integer>0)
    {
        while (n<11)
        {
            printf("\n %d x %d = %d",integer,n,integer*n);
            n++;
        }
    }
    else
    {
        printf("\nWrong Input");
    }
}
