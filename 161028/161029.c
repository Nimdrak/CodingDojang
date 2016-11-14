#include<stdio.h>

//This program can make transformation from 10 numerical system into n numberical system


int main(){

	int number;
	int n_system;
	int result[100];
	int i=0;
	char c;

	printf("What number do you want? : ");
	scanf("%d",&number);
	printf("You want the number : %d \n",number);

	while((c=getchar()))
		if ( c=='\n' || c==EOF)
			break; 

	printf("\nWhat numerical system do you want? : ");
	scanf("%d",&n_system);
	printf("You want the %d numerical system \n",n_system);

	if (n_system > 16){
		printf("\nYou only can use below 17 \n");
		return 0;
	}

	printf("\n");

	if(n_system <= 10 ){
		while(number/n_system){
			result[i]=number%n_system;
			number=number/n_system;
			i++;
		}
		result[i]=number%n_system;
	}

	else{
		while(number/n_system){
			switch(number/n_system){
				case 10: printf("A"); number=number/n_system; break;
				case 11: printf("B"); number=number/n_system; break;
				case 12: printf("C"); number=number/n_system; break;
				case 13: printf("D"); number=number/n_system; break;
				case 14: printf("E"); number=number/n_system; break;
				case 15: printf("F"); number=number/n_system; break;
				default:
					printf("%d",number%n_system);
					number=number/n_system;
			}	
		}	
		printf("%d",number%n_system);
	}

	
	printf("\nResult is \n");
	printf("%s",result);
	while(i>=0){
		printf("%c",result[i]);
        i--;	
	}
	printf("\n");
	return 0;
}
