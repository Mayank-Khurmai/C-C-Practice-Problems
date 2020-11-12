#include<stdio.h>

int main()
{
    int rc;
    printf("Enter the Number : ");
    scanf("%d", &rc);
    for(int i=rc; i>=0; i--)
    {
        for(int j=0; j<rc-i; j++)
        {
            printf("%c", (i+j+65));
        }
        printf("\n");
    }

    return 0;
}

// Input = 5
// E
// DE
// CDE
// BCDE
// ABCDE