#include<stdio.h>

int main()
{
    int rc;
    printf("Enter the Number : ");
    scanf("%d", &rc);
    for(int i=1; i<=rc; i++)
    {
        for(int j=0; j<i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}