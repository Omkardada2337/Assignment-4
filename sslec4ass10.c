// 10. Write a program to print a table of 5.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i;
    system("cls");

    printf("********** TABLE OF 5 *********** ");
    for (i = 1; i <= 10; i++)
    {
        printf("5 * %d = %d\n", i, 5 * i);
    }

    getch();
    return 0;
}