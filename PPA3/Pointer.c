#include<stdio.h>

int main()
{
    char cValue = 'M'; // 1 Byte Memory 
    char * cPtr = &cValue ; 

    int iValue = 21; // 4 Byte Memory 
    int * iPtr = &iValue ;

    float fValue = 10.11; // 4 Byte Memory 
    float * fPtr = &fValue;

    double dValue = 20.11 ; // 8 Byte Memory 
    double * dPtr = &dValue;

    printf("%c\n",*cPtr); // M 

    printf("%d\n",&cValue); // 100

    printf("%d\n",cPtr); //100

    printf("%d\n",sizeof(cValue));//  1 Byte 

    printf("%d\n",sizeof(cPtr)); // 8 Byte 

    printf("%d\n",sizeof(*cPtr)); // 1 byte 

   
  return 0;
}

// First Creat all Variable , While Naming the Variable Keep in Mind that it should have Preciding Letter of its Data type it is Known as Camel Case 
// Data of the Variable and Pointer Should be same 
// Name the Pointer 
// Decorate the Poniter using * operator it should look different then other Variable 

// cPtr contains the address of cValue 100
// iPtr contains the address of iValue 200 
// fPtr contains the address of fValue 300
// dPtr contains the address of dValue 400 

// &fPtr = 700
// *dPtr = 20.11 Pointer is  Pointing to which variable 
// sizeof cPtr = 8 byte
// *iptr = 21
// sizeof (*fPtr) = 4 Byte pointre pointing to which variable techi size 
// *cptr = M 
// sizeof *dptr = 8 byte double ahe 
// sizeof dPtr = 8 byte 
// *fptr + *dptr = 30.22  10.11+20.11
//
