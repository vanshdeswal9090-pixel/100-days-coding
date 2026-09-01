//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int main() {
    int num, temp, rem, sum = 0, i, fact;

    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        rem = temp % 10;
        fact = 1;

        for (i = 1; i <= rem; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == num)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}