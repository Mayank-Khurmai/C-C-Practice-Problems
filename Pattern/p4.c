#include<stdio.h>

int main()
{
    int rc;
    printf("Enter the Number : ");
    scanf("%d", &rc);
    for(int i=1; i<=rc; i++)
    {
        for(int j=i; j>0; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

// Input = 5

// 1
// 21
// 321
// 4321
// 54321