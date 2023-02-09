#include<stdio.h>
//#include<math.h>
/*
int main (){
	int n=1,r,i,j;
printf(" rows =  ");
scanf(" %d",&r);

for(i=1;i<=r;i++){
	for(j=1;j<=i;j++){
		printf(" %d",n);
		n++;
	}
	printf("\n");	
}
}

*/

int main (){
	int y;
	printf("enter the year to check");
	scanf(" %d",&y);
	
	if (y%400==0){
	printf("leap");	
		
	}
	else if (y%100==0){
	printf("not leap");	
	}
	else if (y%4==0){
	printf("leap");	
		
	}
	else
			printf("not leap");	

	
	
	
	
	
	
	
}