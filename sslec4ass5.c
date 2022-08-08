// 5. Write a program to print the first 10 odd natural numbers in reverse order
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i;
    system("cls");
    for (i = 10; i >= 1; i--)
    {
        printf("%d ", 2 * i - 1);
    }

    getch();
    return 0;
}