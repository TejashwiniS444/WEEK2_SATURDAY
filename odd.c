//Program to print odd numbers between 2 and N (N being the number entered)
#include <stdio.h>

void print_Odd(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    print_Odd(n);
    return 0;
}

void print_Odd(int n) {
    printf("2\n"); // Print 2 first
    for (int i = 3; i <= n; i += 2) {
        printf("%d\n", i); // Print odd numbers
    }
}
