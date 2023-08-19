// String & count no. of z in string 

#include<stdio.h>
// #include<stdbool.h>

int CountChar(char *str)      //character pointer 
{

    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'z')
        {   
            iCount++;
            
        }
        str++;
        
    }
    return iCount;
    
}

int main()
{

    char Arr[10];   //static memory allocation
    int iRet = 0;


    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountChar(Arr);

    printf("Numbers of z occurance are : %d\n",iRet);



    return 0;


}