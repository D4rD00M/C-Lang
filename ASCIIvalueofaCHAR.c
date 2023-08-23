//WAP to take input of a character value from the user and then print its ASCII value
#include <stdio.h>
int main() {  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("ASCII value of %c = %d", c, c);
    return 0;
}