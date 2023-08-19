/*
    >>read the data from the  file 

int read(int FD,char *Data, int Size)

FD : File descriptor returned by open
Data : Name of array / string which is empty
Size : no. of bytes that u want to read

Return value  : Number of bytes successfully read in the file 
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
    //char Arr[50] = {'\0'}; // for not getting the garbage value 

    char Arr[50];

    printf("Enter the file name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDWR);  // File descriptor // #

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    iRet = read(fd,Arr,5); 
    
    printf("%d bytes gets successfully fetched from  the file \n",iRet);

    printf("Data from file is : %s\n",Arr);
    close(fd);
    
    return 0;
}



