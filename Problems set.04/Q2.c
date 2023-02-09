#include <stdio.h>

int main (){
int arr[5],i,j,x,temp;
printf("2nd biggest number \n");
printf("enter the elements off array  \n");
for (i=0;i<5;i++) scanf(" %d",&arr[i]);
for (i=0;i<4;i++){
		for (j=0;j<4-i;j++){
			if (arr[j] > arr[j+1])
			{//swapping
				temp =	arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				
			}
		}
	}
printf("the 2nd biggest = %d",arr[3]);

}