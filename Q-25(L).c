#include<stdio.h>

int main()
{
    int n,r,s=0,t;
    printf("ENTER NUMBER:");
    scanf("%d",&n);

    n=t;

    while(n!=0)
    {
        r=n%10;
        s=r+s*10;
        n=n/10;
    }
   printf("%d",s);

}
