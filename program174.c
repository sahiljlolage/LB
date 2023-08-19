// String  error handling---last occurance 

#include<stdio.h>
#define ERR_NOTFOUND -1     //Macro

int LastOccurance(char *str, char cValue)
{
        int iCnt = 1;
        int iPos = ERR_NOTFOUND;

        while(*str != '\0')
        {
            if(*str == cValue)
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
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : \n");
    scanf(" %c",&ch);                       //space 

    iRet = LastOccurance(Arr,ch);

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such character\n");
    }
    else
    {
        printf("Last occurance of that character is at : %d\n",iRet);
    }
    
    return 0;
}

// time complexity n 