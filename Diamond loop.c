#include <stdio.h>

int main()
{
    int number, i, rows;

    printf("Enter number of rows: ");
    scanf("%d", &number);
    for (rows = 1; rows <= number; rows++) {
        for (i = 1; i <= number - rows; i++)
            printf(" ");
        for (i = 1; i < 2 * rows; i++)
            printf("*");
        printf("\n");
    }
    for (rows = 1; rows < number; rows++) {
        for (i = 1; i <= rows; i++)
            printf(" ");
        for (i = 1; i < 2 * (number - rows); i++)
            printf("*");
        printf("\n");
    }
    return 0;
}
