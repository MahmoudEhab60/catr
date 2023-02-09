#include <stdio.h>
int sum (int *a ,int *b ){
	
	return *a + *b ;
}

int main (){
int x  , y ;

printf("number 1 :  "); 
scanf(" %d",&x);
printf("number 2 :  "); 
scanf(" %d",&y);

 printf(" %d",sum(&x,&y));	
	
}