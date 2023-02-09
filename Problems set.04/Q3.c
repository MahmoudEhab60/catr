#include <stdio.h>

int main (){
int arr[5],i,j;

printf("enter the elements off array  \n");
for (i=0;i<5;i++) scanf(" %d",&arr[i]);

printf("the array as a uniqe nubers \n");

for(i = 0; i < 5; i++) 
	{
		for (j=0; j<i; j++)
		{
			if (arr[i] == arr[j])
			break;
       }
      
			if (i == j)
			{
				printf("%d ", arr[i]);
			}
	}






}