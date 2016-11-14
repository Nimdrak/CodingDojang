#include <stdio.h>


int main(int argc, char *argv[]){

	FILE *fp, *ap;
	int i;
	char a;

	if((fp=fopen(argv[1],"r"))==NULL)
		printf("Error:%s file cannot be opened. \n",argv[1]);
	if((ap=fopen(argv[2],"w"))==NULL)
		printf("Error:%s file cannot be opened. \n",argv[2]);

	while((a=getc(fp))!=EOF){
		if(a=='\t'){
			a=' ';
			for (i=0; i<3;i++){
				putc(a,ap);
				}
			}
			putc(a,ap);
		}

		fclose(fp);
		fclose(ap);
		return 0;

}

