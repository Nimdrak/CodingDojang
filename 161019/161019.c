#include<stdio.h>
#define MAXSIZE 10
// This program sums the each of number multiplication in the number
// from 10 to 1000

//declaration of function push & pop
int push(unsigned int val);
int pop(void);

//global variable due to stack
int top;
int stack[MAXSIZE];
void init_stack();

int main(void)
{

	init_stack();

	int i,j;
	int goal;
	int for_length;
	int start;
	int middle;
	int sum_result=0;

	for(i=10;i<1001;i++)
	{
		goal=i;
		do
		{
			push(goal%10);
		}while(goal/=10);
		
		for_length=top;
		start=pop();

		for(j=0;j<for_length;j++)
		{
			middle=pop();
			start*=middle;	
		}
		sum_result+=start;	
	}
	printf("%d",sum_result);
	return 0;
}


	
void init_stack()
{
	top = -1;
}

int push(unsigned int val) 
{
	if (top >= MAXSIZE-1)
	{
		printf("\n Stack Overflow \n");
		return -1;
	}
	stack[++top] = val;
	return val;
}

int pop(void)
{
	if (top < 0)
	{
		printf("\n Stack Underflow \n");
		return -1;
	}
	return stack[top--];
}








	

