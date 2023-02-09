#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char names[5][10] = {"Mahmoud" , "Mohamed" , "Ezzuldean" , "Ahmed" , "Mostafa"};
int passwords[5] = {2722 , 2345 , 1123 , 7644 , 1892};

void login(void);
void pass(int x);

int main()
{
	char run_again;
		do
	{
		login();
		
		printf("\nDo You want to run again?\n");
		printf("1 --> Yes\n");
		printf("2 --> No\n");
		printf("You choose : ");
		scanf("%d",&run_again);
		fflush(stdin); fflush(stdout);
		
	}while(run_again==1);
	
	return 0;
}

void login(void)
{
	int i;
	char urname[10];
		printf("\nEnter username : ");
	gets(urname);
	
	for(i = 0; i < 5; i++)
	{
		if(strcmp(urname , names[i]) == 0)
		{
			pass(i);
			break;
		}
	}
	
	if(i == 5)
		printf("This username is not exist\n");
	
}

void pass(int x)
{
	int password , i;
	
	for(i = 0; i < 3; i++)
	{
		printf("Enter Password : ");
		scanf("%d",&password);
		
		if(password == passwords[x])
		{
			printf("Welcome %s\n",names[x]);
			break;
		}
		else
		{
			//if password is false
			printf("Wrong password !!\n");
		}
	}
	
	if(i == 3)
		printf("No tries\n");
	
}