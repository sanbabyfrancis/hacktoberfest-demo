#include<stdio.h>

int add(int a,int b)
{
	int r;
	r=a+b;
	return r;	
}

int substract(int a,int b)
{
	int r;
	r=a-b;
	return r;
}

int multiply(int a,int b)
{
	int r;
	r=a*b;
	return r;
}

int divide(int a,int b)
{
	int r;
	r=a/b;
	return r;
}

int main()
{
	int i,x,y,op;
	
	while (1)
	{
		printf("\nEnter 1 to add\nEnter 2 to substract\nEnter 3 to multiply\nEnter 4 to divide\nEnter 0 to exit\n\n");
		printf("Enter your option:: ");
		scanf("%d",&op);
		
		if (op==1)
		{
			printf("Enter the 2 numbers:: ");
			scanf("%d %d",&x,&y);
			printf("%d + %d = %d\n",x,y,add(x,y));
		}
		
		else if (op==2)
		{
			printf("Enter the 2 numbers:: ");
			scanf("%d %d",&x,&y);
			printf("%d - %d = %d \n",x,y,substract(x,y));
		}
		
		else if (op==3)
		{
			printf("Enter the 2 numbers:: ");
			scanf("%d %d",&x,&y);
			printf("%d x %d = %d \n",x,y,multiply(x,y));
		}
		
		else if (op==4)
		{
			printf("Enter the 2 numbers:: ");
			scanf("%d %d",&x,&y);
			printf("%d / %d = %d \n",x,y,divide(x,y));
		}
		
		else if (op==0)
		{
			
			break;
		}
		else
		{
			printf("Invalid input");
		}
	}
}
