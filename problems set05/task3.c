#include <stdio.h>



int scalM (int *f , int * p){
int sum =0 ,M, i;

	for (i =0;i<4;i++){
	
	M = f[i] * p[i];
	sum = sum + M;
	}
return sum;	
}
int main (){
int a[]={5,6,7,8};
int b[]={9,4,3,2};
 
 printf("the scalar multiplication = %d ",scalM(a,b) ); 

}