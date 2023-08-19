// String 

#include<stdio.h>
// #include<stdbool.h>

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

    printf("Enter the character : \n");
    scanf("%c",&ch);

    iRet = CountChar(Arr,ch);

    printf("Numbers of occurances are : %d\n",iRet);



    return 0;


}