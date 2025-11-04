#include<stdio.h>
int main()
{
    int n;
    printf("ENTER NUMBER:");
    scanf("%d",&n);

     if(n==1)
     {
         printf("NOT PRIME");
     }


     if(n==2)
     {
         printf("PRIME");
     }
     break;
     for(int i=2;i<=n;i++)
     {
         if(n%i==0)
         {
            printf("NOT PRIME");
            break;
         }
     }




}
