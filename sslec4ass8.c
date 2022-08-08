// 8. Write a program to print squares of the first 10 natural numbers
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i;
    system("cls");
    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i * i);
    }

    getch();
    return 0;
}