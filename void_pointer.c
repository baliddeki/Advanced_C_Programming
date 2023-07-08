#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swapGeneric(void *num1, void *num2, int size)
{
    void *tempMemory = malloc(size);
    memcpy(tempMemory, num1, size);
    memcpy(num1, num2, size);
    memcpy(num2, tempMemory, size);
}

int main()
{
    /**
     * int a = 5;
     * void *ptr = &a;
     * printf("%d", *(int *)ptr);
     */
    int num1 = 3, num2 = 4;
    swapGeneric(&num1, &num2, sizeof(int));
    printf("The swapped new value of a is %d and new value of b is %d ", num1, num2);
}