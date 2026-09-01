//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, middle, divisor, result;

    scanf("%d", &num);

    last = num % 10;

    digits = (int)log10(num);
    divisor = (int)pow(10, digits);

    first = num / divisor;

    middle = (num % divisor) / 10;

    result = last * divisor + middle * 10 + first;

    printf("%d", result);

    return 0;
}