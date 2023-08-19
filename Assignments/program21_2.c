////////////////////////////////////////////////////////////////////////////////////
// Problem Statement : Accept character from user. If character is small display its
// corresponding capital character, and if it small then display its 
// corresponding capital. In other cases display as it is. 
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>



int main()
{
    int iCnt = 0;

    printf("ASCII Table\n");
    
    printf("Symbol Decimal Hex    Octal\n");
    
    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%c\t%d\t%x\t%o\t\n",iCnt,iCnt,iCnt,iCnt);
    }

    return 0;


}