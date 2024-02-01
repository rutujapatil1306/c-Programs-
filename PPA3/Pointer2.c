#include<stdio.h>

int main()
{
    int no = 11;

    int * p = &no;

    int * x = &no;

    int ** q = &p;

    int *** a = &q;

    int **** b = &a;

    int ***** c = &b;

    return 0 ;

}

// sizeof (no)= 4 byte
// &no = 100
// no = 11
// *x = 11
// *p = 11
// **q = 11
// *q = 100
// **b = 200
// ****c = 100
// &a = 400 
// &x = 250
// &b = 500
// ***a = 11
// sizeof a = 8 byte 
// sizeof c = 8 byte 
// sizeof **q = 4 byte 
// sizeof (****b) = 4 byte 
// a = 300 
//