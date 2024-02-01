#include <stdio.h>

int main()
{
    int no1 = 10 ;
    int no2 = 10 ;

   int ans1 = 0 ;
   int ans2 = 0 ;

   ans1 = no1-- ;
   printf("Value of ans1 is %d\n",ans1);
   printf("Value of no1 is  %d\n",no1);

   ans2 = --no2;
   printf("Value of ans2 is %d\n",ans2);
   printf("Value of no2 is %d\n",no2);

   return 0 ; 

}