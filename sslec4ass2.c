// 2. Write a program to print the first 10 natural numbers.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i;
    system("cls");
    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }

    getch();
    return 0;
}