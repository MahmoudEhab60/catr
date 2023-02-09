#include <stdio.h>
int re(int arr[],int n){
	int i,j,r,c;
	for(i = 0; i < n; i++) 
	{ c=0;
		for (j=0; j<=i; j++)
		{
			if (arr[i] == arr[j]){
				//r=arr[j];
				c++;	
			}
	  
		}
		if (c>1)
			return arr[i];
	}
	
}
int main (){
int n,i;
printf("enter the array to check \n");
printf("enter the number of elements\n");
scanf(" %d",&n);
int arr[20];
printf("enter your array ");

for(i=0;i<n;i++){
	scanf(" %d",&arr[i]);
	
}
int x = re(arr,n);
printf("%d",x);



}