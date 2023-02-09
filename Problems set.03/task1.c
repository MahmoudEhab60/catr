#include<stdio.h>
int get_max(int,int);

int main (){
int n ,m ,z;
printf("enter first number ");
scanf(" %d",&n);
printf("enter second number ");
scanf(" %d",&m);

z= get_max(n,m);

printf("the max is %d",z);


}

int get_max(int x , int y){
	
	if(x>y)
		return x;
	else 
		return y;
	
	
}
