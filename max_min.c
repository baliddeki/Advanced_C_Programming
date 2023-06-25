/*
* This is a program to find maximum 
* using pass by reference & pointers
*/

#include <stdio.h>
#include <stdlib.h>

void detMax(int num1, int num2, int num3, int *pMin, int *pMax)
{
    *pMin = num1; // Assume num1 as the minimum
    *pMax = num1; // Assume num1 as the maximum

    if (num2 < *pMin)
    {
        *pMin = num2;
    }
    else if (num2 > *pMax)
    {
        *pMax = num2;
    }

    if (num3 < *pMin)
    {
        *pMin = num3;
    }
    else if (num3 > *pMax)
    {
        *pMax = num3;
    }
}

int main(){
    int a = 10, b = 5, c = 30;
    int min, max;
    detMax(a, b, c, &min, &max);
    printf("address of a and b is %p and %p \n", &a, &b);
    printf("Maximum number is %d and minimum number is %d", max, min);

}