#include<stdio.h>
int main()
{
int n;
printf("ENTER N:");
scanf("%d",&n);
int sum=0;
for(int i=1;i<=n;i++)
{


if(i%13==0){
printf("%d\n",i);
sum=sum+i;
}



}
printf("SUM IS:%d   ",sum);


}