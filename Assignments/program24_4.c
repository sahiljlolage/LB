/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : write a program which accept string from user and accept one character.Return index
// of last occurance of that character.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define ERR_NOTFOUND -1

int LastChar(char *str,char ch)
{
    int iCnt = 0;
    int iPos = ERR_NOTFOUND;

    while(*str != '\0')
    {
        if(*str == ch)
        {
           iPos = iCnt;
    
        }
        str++;
        iCnt++;

    }
    return iPos;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;
    
    printf("Enter the string ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character ");
    scanf(" %c",&cValue);

    iRet = LastChar(arr,cValue);

    printf("Character location is %d",iRet);

    return 0;

}