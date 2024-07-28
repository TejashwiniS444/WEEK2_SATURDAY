//Program to concat two strings
#include <stdio.h>
#include <string.h>

void Concatenate_Strings(char s1[], char s2[], char result[]);

int main() {
    char s1[100], s2[100], result[200]; 

    printf("Enter the first string: ");
    scanf("%s", s1);

    printf("Enter the second string: ");
    scanf("%s", s2);

    Concatenate_Strings(s1, s2, result);

    printf("Concatenated string: %s\n", result);

    return 0;
}

void Concatenate_Strings(char s1[], char s2[], char result[]) {
    strcpy(result, s1);       
    strcat(result, s2);       
}
