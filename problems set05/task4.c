#include <stdio.h>

void sort (int *arr,int n ){
	
int i,j,temp;	
	
	for (i=0;i<n-1;i++){
		
		for (j=0;j<n-1-i;j++) {
			if (arr[j]>arr[j+1]){	
		
			temp = arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}		
	}		
}
	
for (i=0;i<10;i++){
	printf("%d \n",arr[i]);
	
	
}		
	

	
}


int main (){
int a[10];	
int i;
	for (i=0;i<10;i++){
	
	printf("enter element %d  : ",i+1);
	scanf(" %d",&a[i]);
}
int m = sizeof(a)/sizeof(a[0]);

sort (a,m);
	
	
}













