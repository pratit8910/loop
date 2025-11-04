
#include<stdio.h>
int main()
{
   int n,c,sum=0;
   printf("ENTER NUMBER:");
   scanf("%d",&n);

   while(n!=0)
   {
       sum=sum+1;
       n=n/10;
   }
   printf("number of digits are:%d",sum);


}
