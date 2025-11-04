#include<stdio.h>
int main()
{
    int n,i,j,m,f,sum=0;
    printf("ENTER N:");
    scanf("%d",&n);

for(i=1;i<=n;i++)
{

    f=0;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
            f=1;
        break;
    }
     if(f==0)
    {
        sum=sum+1;
    }
}
printf("TOTAL PRIME NUMBERS ARE:%d",sum-1);



}

