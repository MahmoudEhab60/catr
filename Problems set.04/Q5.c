 #include <stdio.h>
 int main (){
	 
	int i,j,sum=0,arr[5][5];
	printf("elements of array : \n"); 
	
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	//sum of the elements 
	
		// rows
		printf("sum of rowes : \n");
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
		sum=sum+arr[i][j];
		}
			printf(" %d",sum);
			sum=0;
	}
	
	//columns
		printf("\n sum of columns = ");
	for (j=0;j<5;j++){
		for (i=0;i<5;i++){
		sum=sum+arr[i][j];
		}
			printf(" %d",sum);
			sum=0;
	}	
	 
	 
 }