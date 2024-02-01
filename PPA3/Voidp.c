#include<stdio.h>

 // #define NULL (void *)0         replace (void*)0 with NULL     
 // NULL is consider as MACRO ,this macro is define in stdio.h Header file 

int main()
{
    int * p = NULL ; 

    int * q ; //  Segmentation Fault . It may cointains Garbage Value 

    printf("%d\n",*q);


     return 0 ; 
}