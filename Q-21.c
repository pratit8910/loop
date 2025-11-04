#include<stdio.h>
int main()
{
   int n,c;
   printf("ENTER NUMBER:");
   scanf("%d",&n);

   while(n!=0)
   {
       c=n%10;
       printf("%d ",c);
       n=n/10;
   }


}
