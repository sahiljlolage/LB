/////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : Accept number of rows and number of columns from user and display below pattern.
/////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Output :
        A   B   C   D    
        a   b   c   d       
        A   B   C   D    
        a   b   c   d    
        
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    
    if(iRow != iCol)
    {
      printf("Invalid input\n");
      return;
    }

    for(int i = 1; i <= iRow; i++)
    {
    char ch  =  'A';
    char ch1 =  'a' ;

        for(int j = 1; j <= iCol; j++)
        {
            
            if((i % 2)== 1)
            {
                printf("%c\t",ch);
                ch++;
            }
            else 
            {
                printf("%c\t",ch1);
                ch1++;  
            }
        }
        
        printf("\n");
        
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);
       
    return 0;

}