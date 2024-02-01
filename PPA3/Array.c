#include<stdio.h>

int main()
{
    int no1 = 10; 
    int no2 = 22;
    int no3 = 33;
    int no4 = 40;

    int Data[4] = {10,20,30,40}; // Member initialization list 

    /*int Data[4]; Member by member Initialization 
    Data[0] = 10;
    Data[1] = 20;
    Data[2] = 30;
    Data[2] = 30;
    Data[3] = 40;*/

    printf("Value of no1 is %d\n",no1); // Values get acces using name 
    printf("Value of no2 is %d\n",no2);
    printf("Value of no3 is %d\n",no3);
    printf("Value of no4 is %d\n\n",no4);

    printf("Address of no1 is %d\n\n",&no1); // & is used to get the address 

    printf("First element of array %d\n",Data[0]);
    printf("Second  element of array %d\n",Data[1]);
    printf("Third element of array %d\n",Data[2]);
    printf("Fourth element of array %d\n",Data[3]);

    printf("Base address of array %d\n",Data);
    printf("Base address of first element of array is %d\n",&Data[0]); // Data gets access by using index 
    printf("Base address of second element of array is %d\n",&Data[1]);
    printf("Base address of third element of array is %d\n\n",&Data[2]);

    printf("Sizeof no1 is %d\n",sizeof(no1));  // 4 bytes 
    printf("Sizeof array is %d\n",sizeof(Data)); // 16 bytyes 
    printf("Sizeof first element of array is %d\n",sizeof(Data[0])); // 4 Bytes

    return 0;
}