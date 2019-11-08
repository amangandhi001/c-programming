#include<stdio.h>
int main(){
        float r,a,c;
                        //r-radius,a-area,c-circumference
        printf("Enter radius of the circle:");
        scanf("%f",&r);
        a=3.14*r*r;
        c=2*3.14*r;
        printf("Area of the circle is %f Circumference of the circle is %f\n",a,c);
return 0;}
