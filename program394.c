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

int main()
{

    int fd = 0;
    char Fname[30];
    int iRet = 0;

    char Arr[] = "abcdefghijklmnopqrstuvwxyz";

    printf("Enter the file name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDWR);  // File descriptor 

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    iRet = write(fd,Arr,10);    // 10 -- size upto j letters 
    
    printf("%d bytes gets successfully written in the file \n",iRet);

    close(fd);
    
    return 0;
}



