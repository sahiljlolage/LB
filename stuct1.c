#include<stdio.h>
#include<string.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[40];    
} Sahil, Sarvesh, Keshav;       //.......................................1 way

    // struct Student Sahil, Sarvesh, Keshav;      // global variable //....2nd way

int main()
{
    // struct Student Sahil, Sarvesh, Keshav;      // local variable    //3rd way
    
    Sahil.id = 1;
    Sarvesh.id = 2;
    Keshav.id = 3;

    Sahil.marks = 73;
    Sarvesh.marks = 75;
    Keshav.marks = 78;

    Sahil.fav_char = 'S';
    Sarvesh.fav_char = 'S';
    Keshav.fav_char = 'G';

    strcpy(Sahil.name,"Sahil Jagdish Lolage\n");  //This is because name is a char array (C-string) and we cannot use the assignment operator = with it after we have declared the string.
    printf("name is : %s ",Sahil.name);

    printf("Sahil got %d marks ",Sahil.marks);
    
    return 0;
}
