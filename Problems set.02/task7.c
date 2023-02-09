#include<stdio.h>
int main (){
int  n,i;
float sum ; 
for (i=1;i<=10;i++){
	printf("enter number %d : ",i);
	scanf(" %d",&n);
	sum=sum+n;
}
float avr = sum/10;
printf("sum = %f \n",sum);
printf("avr = %f \n",avr);

}