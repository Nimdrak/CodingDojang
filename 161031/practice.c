#include <stdio.h>
#include <string.h>
#define MAXSTD 5
#define NAMELEN 15

int main(){
	int i,yes=0;
	char name[NAMELEN];
	char student[MAXSTD][NAMELEN]={"Michael Bolton", "Richard Marx", "Ricky Martin","Celine Dion","Cutting	Crew"};
	for(i=0; i < MAXSTD ; i++){
		printf("%p \t%s\n", student[i], student[i]);
}
	printf("Enter student name: ");
	fgets(name, sizeof(name), stdin);


	for(i=0; i < MAXSTD ; i++){
		if(strcmp(student[i], name) == 0) yes=1;
	}

	if(yes){
		printf("YES, %s is a student in CS department\n", name);
	}else{
		printf("NO %s is not a student in CS Department\n",name);
	}

	return 0;
}

	
