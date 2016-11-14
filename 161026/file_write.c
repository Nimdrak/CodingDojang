#include <stdio.h>
int main()
{
	FILE * f;
//	char word[100];
	char c;
	f=fopen("file_write.txt","w");

	printf("Please press your words \n");
	while(c=getchar()){
	
		fprintf(f,"%c",c);
		
		if(c=='\n' || c==EOF)
			break;

	}
//	gets(word);
//	scanf("%s",word);

//	fprintf(f,"%s",word);
	fclose(f);

	return 0;
}

