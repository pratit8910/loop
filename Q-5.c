#include<stdio.h>
int main()
{
    int n;
    printf("ENTER N:");
    scanf("%d",&n);

    int i=1;
    do
    {
        printf("%d\n",i);
       i= i+2;
    }while(i<=n);
}
