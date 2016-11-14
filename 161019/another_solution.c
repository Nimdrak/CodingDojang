#include<stdio.h>

int main(void)
{
	int start, end, nam, mok;
	int i, k;
	int array[1000];
	int value;
	int sum;

	printf("두 숫자를 입력하시오.\n");
	scanf("%d",&start);
	scanf("%d",&end);

	for(i=start; i<end+1; i++){
		mok=i;
		value=1;
		while(mok>0){
			nam=mok%10;
			mok=mok/10;
			printf("%d  ",nam);
			value=value*nam;
		}
		printf("value: %d \n", value);
		array[i]=value;
		sum=sum+value;
	}
	printf("\n");
	for(i=start; i<end; i++){
		printf("%d +",array[i]);
	}
	printf("%d = %d \n",array[end], sum);
	printf("\n");
}

