#include <stdio.h>

void swap(int num1, int num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

}

int main(){
    int a = 5, b = 7;

    printf("Numbers before swap \n a = %d, b = %d \n" , a, b);
    swap(a, b);
    printf("Numbers after swap \n a = %d, b = %d" , a, b);
    return (0);
}