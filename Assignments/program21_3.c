/////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : Accept character from user.If it is capital then display all the charcaters from the 
// input till z. If the input character is small then print all the charcters in reverse order till a.
// In other cases return directly.
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    if((ch >= '0' )&&(ch <= '9'))
    {
        return;
    }
    while(ch <= 'Z')
    {
        printf("%c\t",ch);
        ch++;
    }
    while(ch >= 'a')
    {
        printf("%c\t",ch);
        ch--;
    }

    
}

int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;

}