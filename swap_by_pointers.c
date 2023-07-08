#include <stdio.h>
#include <stdlib.h>

int swap(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    printf("%d\n", *num1);
    printf("%d\n", *num2);
    printf("%d\n", temp);
    printf("--------------------------------------------\n");
    *num1 = *num2;
    printf("%d\n", *num1);
    printf("%d\n", *num2);
    printf("%d\n", temp);
    printf("--------------------------------------------\n");
    *num2 = temp;
    printf("%d\n", *num1);
    printf("%d\n", *num2);
    printf("%d\n", temp);
    printf("--------------------------------------------\n");
}

int main()
{

    int num1 = 13, num2 = 14;
    swap(&num1, &num2);
    printf("The swapped new value of a is %d and new value of b is %d ", num1, num2);
}