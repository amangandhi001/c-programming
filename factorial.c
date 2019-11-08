#include<stdio.h>
int main(){
        int i,n,f=1;
        printf("Enter the num:");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
        f=f*i;}
        printf("\nFactorial of %d = %d\n",n,f);
return 0;}
