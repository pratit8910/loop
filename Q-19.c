#include<stdio.h>
int main()
{
    int n;
    printf("ENTER N:");
    scanf("%d",&n);
   for(int i=0;i<=n;i++)
    {
        if(i%5==0)
            printf("%d\n",i);
    }
}
