#include<stdio.h>
int main()
{
int a=0,b=1,n,nextterm;
printf("Enter number of terms:");
scanf("%d",&n);
printf("Fibonacci series:");
for(int i=0;i<n;i++)
{
printf(" %d",a);
nextterm=a+b;
a=b;
b=nextterm;
}
printf("\n");
return 0;
}
