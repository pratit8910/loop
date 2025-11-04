#include<stdio.h>
int main()
{
   int n,c,sum=0;
   printf("ENTER NUMBER:");
   scanf("%d",&n);

   while(n!=0)
   {
       c=n%10;
    sum =sum+c;
       n=n/10;
   }
   printf("SUM OF DIGITS IS:%d",sum);


}
