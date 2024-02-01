#include<stdio.h>

int main()

{
    int Arr[5] = {10,20,30,40,50};

    int * p = &Arr[0];

    int * q = &Arr[3];

    printf("Number of elements between q and p are %d\n",q-p);
    
    printf("Value of p  before increment is %d\n",p);

    p = p+3;

    /* p + 3 
       p + 3 (sizeof (pointer_Type))
       p + 3 (sizeof int )
       p + 3(4)
       p + 12
       100 + 12
       112
    */

   printf("Value of p After increment id %d\n",p);

    printf("Value of q before increment is %d\n",q);

   q = q-3 ;

   /* q - 1
       q - 1 (sizeof (pointer_type))
       q - 1 (sizeof int)
       q - 1(4)
       q - 4 
       116 - 4 
       112
    */

   printf("Value of q after increment is %d\n",q);


}