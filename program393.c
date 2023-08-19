/*
1. Open existing file 

int open(char *File_name,int Mode);

File_name : name of File that u want to open
Mode : mode in which u want to pen the file
O_RDONLY    Read mode
O_WRONLY    write mode
O_RDWR      Read + write mode

Return value : integer which indicates the index i.e File descriptor

Success : Return value >= 0 (Always starts from 3)
Failure : return value is -1.

2. Close the file 

void close(int fd)

fd : Its a return value of open system call 
    // absolute : complete path
*/
//************************************************************
/*
    create new file 

int create(char *File_name,int Permission)

File_name : Name of that you want to create 
Permission : Permissions for new file(0777)

Return value : On Success it returns >= 0
On failure it returns -1 

*/
#include<stdio.h>
#include<fcntl.h>   // file control read write functions are there
#include<unistd.h>  // universal standard 
#include<stdlib.h>  

int main()
{

    int fd = 0;
    char Fname[30];

    printf("Enter the file name that you want to create\n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);  // File descriptor 

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
        printf("File is successfully created\n",fd);
    }

    return 0;
}

/// error 

