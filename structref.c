// self referential structures 

#include<stdio.h>

typedef struct str
{
    int mem1;
    int mem2;
    struct str *next;

}str;

int main()
{
    str var1 = { 1,2,NULL};
    str var2 = {10,20,NULL};

    var1.next = &var2;      // Assigning address of var2 to var1.next

    //pointer to var1
    str *ptr1 = &var1;

    printf("var2.mem1 : %d\nvar2.mem2 : %d\n",ptr1->next->mem1,ptr1->next->mem2);

    return 0;


}