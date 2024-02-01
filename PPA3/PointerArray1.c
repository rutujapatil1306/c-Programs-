#include<stdio.h>

int main()
{
    int Arr[5] = { 10,20,30,40,50} ; 

    int * p = &(Arr[0]);

    int * q = &(Arr[4]);

    return 0;
}

// *p = 10
// *q = 50
// sizeof arr = 20 byte 
// sizeof(Arr[2])= 4 byte 
// sizeof(q) = 8 byte 
// sizeof (p) = 8 byte 
// sizeof(*p) = 4 byte type of pointeer is integer
// arr = 100 
// arr[0] = 10
// arr[1] = 20 
// arr[4] = 50
// &(arr[0]) = 100
// &(arr[4]) = 116 
// p = 100
// q = 116


// (*p)+(*q) = 60 10+50
// (*p)+5 = 15  10+5
// (*p)*(*q) = 500  200+300 Address of P and Q chi Addition 