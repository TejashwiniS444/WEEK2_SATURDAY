// Program to increment each digit by 1
#include <stdio.h>
#include <string.h>

void increment_digits(char str[]);

int main() {
    char str[100]; 
    printf("Enter a number: ");
    scanf("%s", str); 

    increment_digits(str);
    printf("Output: %s\n", str);

    return 0;
}

void increment_digits(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        str[i] = (str[i] - '0' + 1) % 10 + '0'; 
}
}