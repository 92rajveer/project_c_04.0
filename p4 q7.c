#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            if(i == 1 || i == 3)          // First and third rows
            {
                printf("* ");
            }
            else if(i == 2)
            {
                if(j == 1 || j == 5)      // Second row: first & last star
                    printf("* ");
                else
                    printf("  ");
            }
            else                          // Fourth and fifth rows
            {
                if(j == 1)
                    printf("* ");
                else
                    printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}


