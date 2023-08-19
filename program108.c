//Pattern printing 
// input : 5
//output :  1234 5 4321


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;


        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
        
            printf("%d\t",iCnt);

        }

        for(iCnt = iNo - 1; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
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