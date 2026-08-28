//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int original = n;
    int numDigits = 0;
    int temp = n;

    // Count number of digits
    while (temp != 0) {
        numDigits++;
        temp /= 10;
    }

    int sum = 0;
    temp = n;

    while (temp != 0) {
        int digit = temp % 10;
        sum += (int) pow(digit, numDigits);
        temp /= 10;
    }

    if (sum == original) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}