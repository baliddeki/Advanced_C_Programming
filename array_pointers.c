#include <stdio.h>
#include <stdlib.h>

int marks[] = {30, 50, 70};

int main(){
    int i = 0;

    //printf("Marks start at %p \n", marks);

    //printf("Grades are %d ", *marks);

    while(i < 3){
        printf("The address of %d is %p \n", marks[i], &marks[i]);
        i++;
    }

}
