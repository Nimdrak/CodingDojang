#include <stdio.h>
#include <stdlib.h>

void AscSort_dyna(int * ptr, int dyna);


int main(void){

	
	printf("Dynamic array case \n");
	
	int i;
	int temp;
	int* input;
	int array_size;
	int checking_size;
	int minimum_value;

	printf("Please type the length of array \n");
	scanf("%d", &array_size);
	checking_size=array_size-1;

	input=(int*)malloc(sizeof(int)*array_size);

	for(i=0; i<array_size; i++){
		printf("array[%d] element : ",i);
		scanf("%d",&temp);
		input[i] = temp;

	}


	AscSort_dyna(input, array_size);


	printf("Asceding order array");	
	for(i=0; i<array_size; i++){
		printf("%d ",input[i]);
	}
    printf("\n");

	minimum_value = input[1]-input[0];
	printf("Finding minimum distance pair in one dimesnsion \n");	
	for(i=0; i<checking_size; i++){
		printf("%d ", input[i+1]-input[i]);
		if ( minimum_value > input[i+1]-input[i])
		{
			minimum_value=input[i+1]-input[i];
		}
	}

    printf("\n");
	
	printf("The result of findings \n");

	for(i=0; i<checking_size; i++){
		if ( minimum_value == input[i+1]-input[i])
		{
			printf("(%d,%d) \n", input[i+1],input[i]);
		}
	}







	return 0;

}


void AscSort_dyna(int * ptr, int dyna)
{
	int temp;
	int i=0,j=0;
	for (i=0;i<dyna; i++)
		for (j=0; j<dyna-i;j++)
		{
			if(ptr[j]>ptr[j+1])
			{
				temp = ptr[j+1];
				ptr[j+1]=ptr[j];
				ptr[j]=temp;
			}
		}
	
}

