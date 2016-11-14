#include<stdio.h>
#include<stdlib.h>
#define MAXSTD 17
#define NAMELEN 10

typedef struct _Node{
	int dup;
	struct _Node *next;
}Node;

Node *head;

void InitList() {
	head = (Node*)malloc(sizeof(Node));
	head->next = NULL;
}


Node* PutNode(Node *Target, Node *Temp){
	Node *New;
	New = (Node*)malloc(sizeof(Node));
	*New=*Temp;

	New->next=Target->next;
	Target->next=New;
	return New;
}


int main(void){

	int i=0, j=0,k=1;
	int num_kim=0;
	int num_lee=0;
	int num_ljy=0;
	char worker[MAXSTD][NAMELEN]={"이유덕","이재영","권종표","이재영","박민호","강상희","이재영","김지완","최승혁","이성연","박영서","박민호","전경헌","송전환","김재성","이유덕","전경헌"};
	int check_repetition[MAXSTD]={0};

	Node *Target;
	Node Temp;
	InitList();
	Target = head;

	for(k=1 ; k <= 10 ; k++){
		Temp.dup=k;
		Target=PutNode(Target,&Temp);
	}


/* Counting the number in terms of the specific last name*/
	for(i=0; i < MAXSTD ; i ++){
		printf("%c%c%c \n",worker[i][0],worker[i][1],worker[i][2]);
	
		if(worker[i][0] == worker[0][0] && worker[i][1] == worker[0][1] && worker[i][2]==worker[0][2]){
			num_lee++;
		}
	    if(worker[i][0] == worker[14][0] && worker[i][1] == worker[14][1] && worker[i][2]==worker[14][2]){
			num_kim++;
		}		

	}

	printf("The number of lee is %d \n", num_lee);
	printf("The number of kim is %d \n", num_kim);


/* Counting the number in terms of the specific name*/
	for(i=0; i < MAXSTD ; i ++){
	
		if(worker[i][0] == worker[1][0] && worker[i][1] == worker[1][1] && worker[i][2]==worker[1][2]){
			if(worker[i][3] == worker[1][3] && worker[i][4] == worker[1][4] && worker[i][5]==worker[1][5]){
				if(worker[i][6] == worker[1][6] && worker[i][7] == worker[1][7] && worker[i][8]==worker[1][8]){
			num_ljy++;
				}
			}
		}

	}

	printf("The number of ljy is %d \n", num_ljy);

	for(i=0; i < MAXSTD ; i ++){
		for(j=i; j< MAXSTD ; j ++){	
		if(worker[i][0] == worker[j][0] && worker[i][1] == worker[j][1] && worker[i][2]==worker[j][2]){
			if(worker[i][3] == worker[j][3] && worker[i][4] == worker[j][4] && worker[i][5]==worker[j][5]){
				if(worker[i][6] == worker[j][6] && worker[i][7] == worker[j][7] && worker[i][8]==worker[j][8]){
					check_repetition[i]++;
					if(i != j){
						printf("%d, %d \n",i,j);
						Temp.dup=j;
						Target=PutNode(Target,&Temp);
						}
					}
				}
			}
		}
		if(check_repetition[i] == 1){
			printf("%c%c%c%c%c%c%c%c%c \n",worker[i][0],worker[i][1],worker[i][2],worker[i][3],worker[i][4],worker[i][5],worker[i][6],worker[i][7],worker[i][8]);
		}



	}


	for(Target=head->next;Target;Target=Target->next){
		printf("%d\n",Target->dup);
	}






	return 0;

}
/* test : for express one hangle character, we need 3 byte. Why?
printf("%c%c%c\n",test[0],test[1],test[2]);
printf("%s \n",test);
*/
