// String  error handling---count capital and small

#include<stdio.h>

void Frequency(char *str)
{
    int iCapCnt = 0,iSmallCnt = 0;

    while(*str = '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmallCnt++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapCnt++;
        }
        str++;
    }
    printf("Small case characters count : %d\n",iSmallCnt);
    printf("Capital case characters count : %d\n",iCapCnt);

}

int main()
{
    char Arr[20];
    

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    Frequency(Arr);

    
    
    return 0;
}

// time complexity n 