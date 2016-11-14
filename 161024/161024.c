#include<stdio.h>

int main(void){

	int num1;
	int num2;
	int num3;

	printf("총 건수를 입력하세요 : ");
	scanf("%d", &num1);

	printf("한 페이지에 보여줄 게시물 수를 입력하세요 : ");
	scanf("%d", &num2);

	if(num1 <= num2)
	{
		num3 = 1;
	}
	else
	{
		num3 = num1/num2 + 1;
	}

	printf("\n");
	printf("입력 : 총 건수(%d), 한 페이지에 보여줄 게시물수(%d) ( 단 n은 1보다 크거나 같다. n>=1) \n",num1,num2);
	printf("출력 : 총 페이지 수 %d \n", num3);

	return 0;

}

