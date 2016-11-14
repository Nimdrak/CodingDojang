#include<stdio.h>

int main(void)
{
	int i, j;
	int arr[10] = { 0, };

	for (i = 1; i <= 1000; i++ )
	{
		j=i;
		while(j != 0)
		{
			arr[j%10]++;
			j /= 10;
		}
	}

	for (i=0; i< sizeof(arr)/sizeof(arr[0]); i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");

	return ;
}




