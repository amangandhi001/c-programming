#include<stdio.h>
int main(){
        char code;
        printf("Enter 1st letter of colour:");
        scanf("%c",&code);
switch(code){
case 'y':
printf("Yellow Colour\n");
break;
case 'b':
printf("Black\n");
break;
case 'r':
printf("Red\n");
break;
case 'p':
printf("Pink\n");
break;
default:
printf("Colour is Wrong\n");}
return 0;}
