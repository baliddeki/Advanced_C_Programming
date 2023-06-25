#include <stdio.h>
#include <stdlib.h>

int main(){
    //more demonstration on pointers
    int num1 = 5, num2 = 7;
    int *ptrA, *ptrB;

    //num1 = 5, num2 = 7
    printf("num1 = %d, num2 = %d \n", num1, num2);

    //linking pointers to memory addresses of num1 and num2
    ptrA = &num1;
    ptrB = &num2;

    //num1 = 5, num2 = 7
    printf("num1 = %d, num2 = %d \n", num1, num2);

    //dereferencing: increasing values of num1 by 1 and num2 by 3
    *ptrA = *ptrA + 1;
    *ptrB = *ptrB + 3;

    //num1 = 6, num2 = 10
    printf("num1 = %d, num2 = %d \n", num1, num2);

    //switching pointers
    //ptrA now points to &num2
    //ptrB now points to &num1
    ptrA = ptrB;
    ptrB = ptrA;

    //num1 = 6, num2 = 10
    //*ptrA = 10, *ptrB = 10
    printf("num1 = %d, num2 = %d \n", num1, num2);
    printf("*ptrA = %d, *ptrB = %d \n", *ptrA, *ptrB);

    //re-assigning values of num1 and num2
    num1 = *ptrB;
    num2 = num1 - 3;

    //num1 = 10, num2 = 7
    printf("num1 = %d, num2 = %d \n", num1, num2);
    return (0);
}