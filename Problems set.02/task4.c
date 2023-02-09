#include <stdio.h>
int main (){
int deg;
printf("enter your degree percentage ");
scanf(" %d",&deg);
if(deg<=100){
if (deg>=85)
printf("Excellent");
else if (deg<85 && deg>=75)
printf("very good");
else if (deg<75 && deg>=65)
printf(" good");
else if (deg<65 && deg>=50)
printf("weak");
else 
printf("faild");
}
else
	printf("Wrong prcentage ");
}