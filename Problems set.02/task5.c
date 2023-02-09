#include <stdio.h>
int main (){
int x,y,z;
printf("enter three numbers \n");
scanf(" %d \n %d \n %d",&x,&y,&z);
if(x>y && x>z)
	printf("x is the biggest");
else if(y>x && y>z)
	printf("y is the biggest");
else
	printf("z is the biggest");



}