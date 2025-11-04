#include<stdio.h>
int main()
{
    int n,sum=0;
     printf("ENTER NUMER:");
     scanf("%d",&n);


     for(int i=1;i<n;i++)
     {
         if(n%i==0)
         {
             sum=sum+i;
         }

     }
     printf("sum is :%d\n",sum);
     if(sum==n)
     {
         printf("NUMBER IS PERFECT");
     }
     else
     {
         printf("NOT PERFECT");
     }

}
