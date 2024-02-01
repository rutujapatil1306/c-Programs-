#include<stdio.h>

int main()
{
    int Arr[5] = {10,20,30,40,50};

    int * p = &Arr[0];

    int * q = &Arr[4];
    
    printf("Value of p before increment is %d\n",p);
    p++;

    /* p + 1 
       p + 1 (sizeof (pointer_Type))
       p + 1 (sizeof int )
       p + 1(4)
       p + 4
       100 + 4
       104 
    */

    printf("Value of p after increment is %d\n",p);    

    printf("Value of q before decrement is %d\n",q);
    q-- ; 

    /* q - 1
       q - 1 (sizeof (pointer_type))
       q - 1 (sizeof int)
       q - 1(4)
       q - 4 
       116 - 4 
       112
    */
    printf("value of the q After Decerement %d\n",q);

   printf("value of the difference of the pointer is %d\n",q-p);

   printf("Address of Fifth Element is %d\n",&Arr[4]);
    
    printf("Address of First Element is %d\n",&Arr[0]);

    return 0 ;
}

/* Pointer + Pointer is not allowed if we do Addition of two pointer then address of both pointer gets added 
   ans there is no use of that address which we get as answer 
   p + Q 
   100 + 116
   216 
   so dont have to do anything the memory at 216


*/