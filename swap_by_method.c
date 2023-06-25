#include <stdio.h>

//swap method
void swap(int num1, int num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

}

int main(){
    int a = 5, b = 7;

    printf("Numbers before swap \n a = %d, b = %d \n" , a, b);

    //calling swap method
    swap(a, b);

    //a and b values are not swapped since they are passed by value and not by reference
    printf("Numbers after swap \n a = %d, b = %d" , a, b);
    return (0);
}