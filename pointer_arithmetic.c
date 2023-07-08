#include <stdio.h>
#include <stdlib.h>
/**
 * just a simple program demonstrting pointer arithmetic
 */
int main()
{
    int *ptr = 3000;
    ptr = ptr + 1;
    printf("%d \n", ptr);

    int grades[3] = {1, 2, 3};
    int *grades_ptr = grades;
    printf("%d \n", grades_ptr);
    printf("%d \n", grades_ptr + 1);
    printf("%d \n", grades_ptr + 2);
    printf("-------------------------------------------------------------");

    int num = 30;
    int *p;
    printf("%d \n", num);
    p = &num;
    printf("%d \n", &num);
    printf("%d \n", p);
    *p = 20;
    printf("%d \n", num);

    printf("---------------------------------------------------\n");
    int grade = 80;
    printf("size of variable = %d\n", sizeof(grade));

    double grade1 = 79.9;
    printf("size of variable = %d\n", sizeof(grade1));

    int grade2 = 80, grade3 = 90;
    printf("size of variable = %d\n", sizeof(grade3 + grade2));

    int grade4 = 80, grade5 = 90;
    printf("size of variable = %d\n", sizeof(grade4) + sizeof(grade5));

    printf("--------------\n");
    printf("%d \n", sizeof(float));
    printf("%d \n", sizeof(int));
    printf("%d \n", sizeof(double));
    printf("%d \n", sizeof('a'));
    printf("%d\n", sizeof("a"));

    int number = 50;
    int *pointer;
    pointer = &number;
    printf("%d", sizeof(pointer));
}