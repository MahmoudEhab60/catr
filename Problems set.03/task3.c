#include <stdio.h>
void dig(int);
int main (){
int x;
printf("enter the number ");
scanf(" %d",&x);
printf("number of digites = ");
dig(x);

}
void dig(int n){
	int c=0;
	while (n !=0){
	c++;	
	n=n/10;	
		
	}

	printf(" %d",c);
		
}

