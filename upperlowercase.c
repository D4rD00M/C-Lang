//write a program in C that converts any given character (in uppercase) from user (at run-time) to lowercase character.

#include<stdio.h>
int main()
{
    char upperChar, lowerChar;
    int ascii;
    printf("Enter an uppercase Character: ");
    scanf("%c", &upperChar);
    ascii = upperChar;
    lowerChar = ascii+32;
    printf("\nIts Lowercase = %c", lowerChar);
    return 0;
}
