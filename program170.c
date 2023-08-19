// String 

#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str,char cValue)      //character pointer 
{

    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == cValue)
        {   
            iCount++;
            
        }
        str++;
        
    }
    return iCount;
    
}

int main()
{

    char Arr[20];   //static memory allocation
    char ch = '\0';

    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    fflush(stdin);   // stdin => keyboard 

    printf("Enter the character : \n");
    scanf("%c",&ch);       //enter => space contains ... Flushes enter 

    iRet = CountChar(Arr,ch);

    printf("Numbers of occurances are : %d\n",iRet);

    return 0;


}