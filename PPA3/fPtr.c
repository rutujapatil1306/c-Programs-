#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
    int ans = 0 ; // Memory gets Allocted in Stack 
    ans = iNo1 + iNo2 ; // same 
    return ans;
}

int main()
{
   int a = 10 , b= 20 ; // Memory gets Allocted in Stack 
   int iRet = 0 ; // same All Are local variable so in stack 

   iRet = Addition(a,b); 

   printf("Addition is %d\n",iRet);

    return 0 ;
}