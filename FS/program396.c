/*
    >>write the data into the file 

int Write(int FD,char *Data, int Size)

FD : File descriptor returned by open
Data : Name of array / string which contains the data that u want to write 
Size : no. of bytes that u want to write 

Return value  : Number of bytes successfully written in the file 
*/
#include<stdio.h>
#include<fcntl.h>   // file control read write functions are there
#include<unistd.h>  // universal standard 
#include<stdlib.h>  
#include<string.h>

int main()
{

    int fd = 0;
    char Fname[30];
    int iRet = 0;

    char Arr[50];

    printf("Enter the file name that you want to open\n");
    scanf("%s",Fname);

    printf("Enter the data that you want to write into the  file\n");
    scanf(" %[^'\n']s",Arr);

    fd = open(Fname, O_RDWR | O_APPEND);  // File descriptor // #

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    iRet = write(fd,Arr,strlen(Arr)); 
    
    printf("%d bytes gets successfully written in the file \n",iRet);

    close(fd);
    
    return 0;
}



