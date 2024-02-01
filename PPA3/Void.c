#include<stdio.h>

int  main()
{
    int iValue = 10 ;
    char cValue = 'A';
    float fValue = 10.11;
    double dValue = 11.11;

    void * ptr = NULL ; 

    ptr = &iValue ;
    printf("%d\n",*(int*) ptr);

    ptr = NULL;
    ptr = &fValue ;
    printf("%f\n",*(float*)ptr);

    ptr = NULL ;
    ptr = &cValue;
    printf("%c\n",*(char*)ptr);

    return 0 ; 
}