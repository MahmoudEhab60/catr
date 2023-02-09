#include <stdio.h>

/*
int main (){
int n,i,j ;
printf("Rows ? ");
scanf(" %d",&n);

for(i=1;i<=n;i++){
	
	for(j=1;j<=2*n-1;j++){
		if (j>=n-(i-1)&&j<=n+(i-1))
			printf("*");
		else printf(" ");
	}	

	printf(" \n");
}


}

*/

int main (){
	int a=5 ,b=6,c;
	c=sum(a,b);
	printf(format"%d",c);
	return 0;
	
}

int sum (int a,int b){
	
	return a+b;
	
	
	
	
}