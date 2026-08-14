//Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main() { 
    int a, b;
    printf("Enter the first number: "); 
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping, the first number is: %d\n", a);
    printf("After swapping, the second number is: %d\n", b);
    return 0;
}