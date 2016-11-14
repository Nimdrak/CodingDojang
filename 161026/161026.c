#include<stdio.h>

// This program transform CamelCase into Pothole_case

int main(void){

	FILE * f;
	int start_state=0;
	char c;

	f=fopen("file_output.txt","w");
	
	while((c=getchar()))
	{
		if('A'<= c && c <= 'Z'){
			if(start_state==1){
				fprintf(f,"%s","_");
			}
			c=c+('a'-'A');
			fprintf(f,"%c",c);
		}

		else if('0' <=c && c <= '9'){
			if(start_state==1){
				fprintf(f,"%s","_");
				}
			fprintf(f,"%c",c);
		}
	
		else{
			fprintf(f,"%c",c);
		}
		
		start_state=1;

		if(c=='\n' || c==EOF)
			break;

	}

	fclose(f);




	return 0;
}

