/*
read file and small charcters count 
*/
#include<stdio.h>
#include<fcntl.h>   // file control read write functions are there
#include<unistd.h>  // universal standard 
#include<stdlib.h>  
#include<string.h>

#define BUFFERSIZE 1024     // user defined macro

int main()
{

    char Filename[50];
    int fd = 0;
    char Arr[BUFFERSIZE];      // will increase the execution of file to read by allocating the size 100
    int iRet = 0;
    int iCnt = 0,iCount = 0;


    printf("Enter the file that u want to open\n");
    scanf("%s",Filename);

    fd = open(Filename,O_RDONLY);

    while(1)        // no condition
    {
        iRet = read(fd,Arr,sizeof(Arr));         // 10
        if(iRet == 0)
        {
            break;
        }
        // Logic to apply on Arr
        for(iCnt = 0; iCnt < iRet; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount++;
            }
        }

    }
    printf("Number of capital case letters are : %d\n",iCount);

    close(fd);

return 0;

}
