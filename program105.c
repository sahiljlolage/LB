//Pattern printing 
// input : 7
//output : a1 b2 c3 d4 e5 f6 g7

// input : 3
//output : a1 b2 c3  

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'a';

    for(iCnt = 1, ch = 'a'; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t%d\t",ch,iCnt);
        
    }
    printf("\n");
}

int main()
{
    int iFrequency = 0;
    printf("Enter the frequency of symbol : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;

}