#include <stdio.h>
int main (){
int x,y,z;
printf("enter 1st number multiplay : ");
scanf(" %d",&x);
printf("enter 1st number multiplay : ");
scanf(" %d",&y);
printf("enter number to check ");
scanf(" %d",&z);
int res = x*y;
while (1){
if (z == res){
	printf("Thanks");
	break;
	}
else
	printf("try again ");
break;
}


}