#include<stdio.h>
int main()
{
    int A[50],i,j,n,temp;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the number:\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
    printf("%d ",A[i]);
    }
    printf("\n");
    return 0;
}
