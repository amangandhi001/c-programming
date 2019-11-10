#include<stdio.h>
int main()
{   
 int a,b,max;
 printf("Enter two num:");
 scanf("%d %d",&a,&b);
 max=a>b ? a:b;
 printf("Greater num is %d\n",max);
return 0; 
}
