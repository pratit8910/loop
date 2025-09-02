#include<stdio.h>
int main()
{
    int num[10];
    float sum=0;
    int n;
        printf("ENTER N:",n);
        scanf("%d",&n);
    for(int i=0;i<n;i++)

{
    printf("ENTER NUMBER:",num[i]);
    scanf("%d",&num[i]);
    sum=sum+num[i];
}
     printf("SUM IS:%f\n",sum);
     printf("AVERAGE IS:%f",sum/10);



}

