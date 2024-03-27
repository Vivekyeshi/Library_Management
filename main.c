#include"book.h"
void main(){
	int n;
	book* bk;
	int* m;
	printf("\n\n                                                                 ***    PROJECT OF C   ***\n\n");
	printf("----------------------------------------------\n");
	printf("Enter how many number of books you want store: ");
	scanf("%d",&n);
	printf("----------------------------------------------\n");
	m=&n;
	bk=(book*)malloc(sizeof(book)*n);
	storebk(bk,n);
	Menu(bk,n,m);
}
void Menu(book* bk,int n,int* m){
	int ch;
	printf("\n\n---------------------------------------------------------\n");
	printf("for doing following action please type respective number: \n");
	printf("---------------------------------------------------------\n\n");
	printf("1. Store book again in database\n\n2. Books available in database\n\n3. search any book\n\n4. update any book\n\n5. delete any book\n\n6. Exit");
	printf("\n\n------------------\nEnter your choice: ");
	scanf("%d",&ch);
	printf("------------------\n");
	if(ch==1){
		storeagain(bk,n,m);
	}
	else if(ch==2){
		displaybk(bk,n,m);
	}
	else if(ch==3){
		searchbk(bk,n,m);
	}
	else if(ch==4){
		updatebk(bk,n,m);
	}
	else if(ch==5){
		removebk(bk,n,m);
	}
	else if(ch==6){
		printf("\n\n\t\t\t\t\t\t\t\t-------------------------\n\t\t\t\t\t\t\t\t");
		printf("Thank You, Visit again!!!\n");
		printf("\t\t\t\t\t\t\t\t-------------------------\n\n");
		free(bk);
	}
	
}


