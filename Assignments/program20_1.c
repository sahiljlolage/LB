//////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : Accept Character from user and check whether it is alphabet or not (A-Z a-z).
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    int iCount = 0;
    while(ch != '\0')
    {
        if((ch >= 'a') && (ch <= 'z') || (ch >= 'A') && (ch <= 'Z'))
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character ");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not Character");
    }

    return 0;

}