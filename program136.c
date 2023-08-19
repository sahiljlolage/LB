//photo pattern 
/*
    Input : 
    Row  : 4
    Col :  4

Output :
*
*   *
*   *   *
*   *   *   *


*/  

#include<stdio.h>

void Display(int iRow, int iCol)
{
   int i = 0, j = 0;

        if(iRow != iCol)        //filter 
    {
        printf("Invalid input");
        return;

    }

    for(i = 1; i<= iRow; i++)   //outer 
    {
        for(j = 1; j <= iCol; j++) //Inner 
        {
             if(i >= j)     //Diagonal with lower triangle
             {
                printf("*\t");
             }
        }
        
        printf("\n");
        printf("\n");

    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;

}

/*
    time complexity n^2 where row and col same 
*/