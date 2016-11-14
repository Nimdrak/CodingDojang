#include<stdio.h>

//This program transform tab character into 4 space characters.


int main(){

	FILE *f;
	f=fopen("result.txt","w");
	int c;
	
	while((c=getchar())!=EOF)
	{
		if ( c=='\t')
		{
			fprintf(f,"    ");
		}
		else
		{
			fprintf(f,"%c",c);
		}
	}
	
	fclose(f);	
	return 0;
}

