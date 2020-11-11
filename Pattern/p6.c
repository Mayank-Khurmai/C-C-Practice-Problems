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
            printf("%c", (i+j+64));
        }
        printf("\n");
    }

    return 0;
}

// Input = 4
// A
// BC
// CDE
// DEFG