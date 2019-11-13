#include<stdio.h>
int square(int);
int main()
{
 int num,answer;
 printf("Enter the num:");
 scanf("%d",&num);                          
 answer = square(num);
 printf("Square of %d is %d\n",num,answer);
}
int square(int n)
{
 return (n*n);
}
