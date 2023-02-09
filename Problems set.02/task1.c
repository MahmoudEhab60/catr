#include <stdio.h>
int main (){
int n ,sal =0;
printf("enter your warking hours in a week : ");
scanf(" %d",&n);

if (n<40){
	sal = 45*n;
}
else {
	sal = 50*n;
}

printf ("fot your %d hours your salary is : %d" ,n,sal);

}