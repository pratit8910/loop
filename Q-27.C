#include<stdio.h>
int main()
{
    int n;
     printf("ENTER NUMER:");
     scanf("%d",&n);

     printf("FACTORS ARE:");
     for(int i=1;i<=n;i++)
     {
         if(n%i==0)
         {
             printf("%d\n",i);
         }


     }

}
