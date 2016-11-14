#include <stdio.h>
#include <stdlib.h>

void AscSort (int * ptr) {

	int temp;
	int i=0,j=0;
	for (i=0; i<6; i++)
		for (j=0; j<6-i;j++){
			if(ptr[j]>ptr[j+1]){
				temp = ptr[j+1];
				ptr[j+1]=ptr[j];
				ptr[j]=temp;
				}
			}
}


void AscSort_dyna (int * ptr,int dyna) {

	int temp;
	int i=0,j=0;
	for (i=0; i<dyna; i++)
		for (j=0; j<dyna-i;j++){
			if(ptr[j]>ptr[j+1]){
				temp = ptr[j+1];
				ptr[j+1]=ptr[j];
				ptr[j]=temp;
				}
			}
}



int main(void) {

	int input;
	int arr[7];
	int i=0;
	char c;

	printf("static array case \n");
	for (i=0; i<7 ; i++){
		printf("? : ");
		scanf("%d", &input);
		arr[i] = input;
	}

	AscSort(arr);

	for (i=0; i < 7 ;i++)
		printf("%d element is %d \n",i,arr[i]);
	printf("the length of array is %d \n", (int)(sizeof(arr)/sizeof(arr[0])));

	while( (c=getchar()) != EOF && c != '\n');







	printf("Dynamic array case \n");

	int* input2;
	int staticSize;
	printf("Please type the length of array \n");
	scanf("%d \n", &staticSize);

	while( (c=getchar()) != EOF && c != '\n');

	printf("%d",staticSize);
	input2 = (int*)malloc(sizeof(int)*staticSize);

	for (i=0; i< staticSize ; i++){
		printf("? : ");
		scanf("%d", &input);
		input2[i] = input;
	}



	
	AscSort_dyna(input2,staticSize);



	for (i=0; i < staticSize ;i++)
		printf("%d element is %d \n",i,input2[i]);

	return 0;
}

