//Program to print sum of digits
#include <stdio.h>

int sum_of_digits(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = sum_of_digits(n);
    printf("The sum of the digits is: %d\n", sum);
    return 0;
}

int sum_of_digits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10; 
        n /= 10;       
    }
    return sum;
}
