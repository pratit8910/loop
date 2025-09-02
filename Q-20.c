#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("ENTER N:");
    scanf("%d",&n);
   for(int i=0;i<=n;i++)
    {
        if(i%3==0)
            printf("%d\n",i);
        sum=sum+(i%3==0);
    }
    printf("SUM IS:%d",sum);
}
