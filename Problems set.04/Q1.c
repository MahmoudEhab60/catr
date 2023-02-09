#include <stdio.h>
int main (){
int arr[5],i,j,x,temp;
printf("Sorting elements \n");
printf("enter the elements off array  \n");
for (i=0;i<5;i++) scanf(" %d",&arr[i]);


printf("decide ascending or descending order \n");
printf("enter X to decide");
scanf("%d",&x);
if (x==0){
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
	
	for (i=0;i<5;i++){
		
		printf("%d\n",arr[i]);
	}
}
else if(x==1){
	for (i=0;i<4;i++){
		for (j=0;j<4-i;j++){
			if (arr[j] < arr[j+1])
			{//swapping
				temp =	arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				
			}
		}
	}	
	for (i=0;i<5;i++){
		
		printf("%d\n",arr[i]);
	}
	
}else printf("try again ");




}