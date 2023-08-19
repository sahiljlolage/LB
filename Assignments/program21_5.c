///////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : Accept character from user and display its ASCII value in decimal,octal,
// and hexadecimal format.
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    
    printf("Decimal : %d\n",ch);
    printf("Octal : %.4o\n",ch);
    printf("Hexadecimal : 0x%02X",ch);

}


int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;

}