#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_itoa(int num, char *str);

//this program counts the number of each numerical figures among 1~1000
int main()
{
	int objective=1000;

	int zero=0;
	int one=0;
	int two=0;
	int three=0;
	int four=0;
	int five=0;
	int six=0;
	int seven=0;
	int eight=0;
 	int nine=0;



	int index=0;
	char buffer[100];

	for(index=1;index<objective+1;index++)
	{
		int number_length;
		int number_index;
		my_itoa(index,buffer);
		number_length=(int)strlen(buffer);

		for(number_index=0;number_index<number_length+1;number_index++)
		{
			if (buffer[number_index]== '0')
				zero++;			
			if (buffer[number_index]== '1')
				one++;			
			if (buffer[number_index]== '2')
				two++;			
			if (buffer[number_index]== '3')
				three++;			
			if (buffer[number_index]== '4')
				four++;			
			if (buffer[number_index]== '5')
				five++;			
			if (buffer[number_index]== '6')
				six++;			
			if (buffer[number_index]== '7')
				seven++;			
			if (buffer[number_index]== '8')
				eight++;			
			if (buffer[number_index]== '9')
				nine++;			

		}

	}

	printf("The number of zero is %d \n", zero);
	printf("The number of one is %d \n", one);
	printf("The number of two is %d \n", two);
	printf("The number of three is %d \n", three);
	printf("The number of four is %d \n", four);
	printf("The number of five is %d \n", five);
	printf("The number of six is %d \n", six);
	printf("The number of seven is %d \n", seven);
	printf("The number of eight is %d \n", eight);
	printf("The number of nine is %d \n", nine);

	return 0;

}



//fuction that make integer become string
char *my_itoa(int num, char *str)
{
	if(str == NULL)
	{
		return NULL;
	}
	sprintf(str, "%d", num);
	return str;
}

