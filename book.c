#include"book.h"

void storebk(book* bk,int n){
	int i;
	for(i=0;i<n;i++){
			printf("\n--------------------------\n");
			printf("Enter Book No.%d details--",i+1);
			printf("\n--------------------------\n\n");
			printf("Enter id of book      	: ");
			scanf("%d",&bk[i].id);
			printf("\nEnter the name of book	: ");
			fflush(stdin);
			gets(bk[i].name);
			printf("\nEnter the author name 	: ");
			fflush(stdin);
			gets(bk[i].author);
			printf("\nEnter publication     	: ");
			fflush(stdin);
			gets(bk[i].publication);
			printf("\nEnter Genre		: ");
			fflush(stdin);
			gets(bk[i].genre);
			printf("\nEnter no. of pages    	: ");
			scanf("%d",&bk[i].pages);
			printf("\nEnter price           	: ");
			scanf("%d",&bk[i].price);
			printf("\nEnter language of book	: ");
			fflush(stdin);
			gets(bk[i].language);
			printf("\nEnter edition         	: ");
			fflush(stdin);
			gets(bk[i].edition);
			printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
	}
}
void displaybk(book* bk,int n,int*m){
			int i;
			if(n==0){
				temp1(bk,n,m);
			}
			else{
			printf("\n\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
			printf("No.  Id  \tName                Author              Publication\t");
			printf("Genre     Pages\t\tPrice\t\tLanguage\tEdition\n");
			printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
			
			
			for(i=0;i<n;i++){
		
			printf("%-3d  ",	i+1);
			printf("%-4d\t",	bk[i].id);
			printf("%-20s",		bk[i].name);
			printf("%-20s",		bk[i].author);
			printf("%s\t\t",	bk[i].publication);
			printf("%-10s",		bk[i].genre);
			printf("%-5d\t\t",	bk[i].pages);
			printf("%-5d\t\t",	bk[i].price);
			printf("%s\t\t",	bk[i].language);
			printf("%s\n",		bk[i].edition);
			printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
			
	}
	Menu(bk,n,m);
}
}
void searchbk(book* bk,int n,int* m){
			int ch,id,i,flag=0;
			char name[50];
			char auth[50];
			printf("\n\n-------------------------------");
			printf("\nEnter parameter to be searched: \n");
			printf("-------------------------------");
			printf("\n\n1.BookId\n\n2.Book Name\n\n3.Book Author\n\n\n");
			printf("\n--------------------\nEnter your choice: ");
			scanf("%d",&ch);
			printf("--------------------\n");
				if(ch==1){
					printf("\n----------------");
					printf("\nEnter book id: ");
					scanf("%d",&id);
					printf("----------------\n");
				for (i=0;i<n;i++){
					if(id==bk[i].id){
						flag=1;
						printf("\n------------------------------");
						printf("\nYes, record found successfully.\n");
						printf("------------------------------");
						break;
					}
				}
				if(flag==1){
					temp(bk,i,n,m);
				}
				else{
					printf("\n---------------------------------------------");
					printf("\nOops, your book is not available in database.     <-----------\n");
					printf("---------------------------------------------");
					Menu(bk,n,m);
				}
			
		}
				if(ch==2){
					printf("\n----------------\n");
					printf("Enter book name: ");
					fflush(stdin);
					gets(name);
					printf("----------------\n");
				for(i=0;i<n;i++){
					if(strcmpi(name,bk[i].name)==0){
						flag=1;
						printf("\n------------------------------");
						printf("\nYes, record found successfully.\n");
						printf("------------------------------");
						break;
					}
				}
				if(flag==1){
					temp(bk,i,n,m);
				}	
				else{
					printf("\n---------------------------------------------");
					printf("\nOops, your book is not available in database.     <-----------\n");
					printf("---------------------------------------------");
					Menu(bk,n,m);
				}
}
				if(ch==3){
					printf("\n------------------\n");
					printf("Enter author name: ");
					fflush(stdin);
					gets(auth);
					printf("------------------\n");
				for(i=0;i<n;i++){
					if(strcmpi(auth,bk[i].author)==0){
						flag=1;
						printf("\n------------------------------");
						printf("\nYes, record found successfully.\n");
						printf("------------------------------");
						break;
					}
			}
				if(flag==1){
					temp(bk,i,n,m);
				}
				else{
					printf("\n---------------------------------------------");
					printf("\nOops, your book is not available in database.     <-----------\n");
					printf("---------------------------------------------");
					Menu(bk,n,m);
				}
			}
}
void updatebk(book* bk, int n,int* m){
			int id,i,ch;
			printf("\n------------------");
			printf("\nEnter Id of Book: ");
			scanf("%d",&id);
			printf("------------------\n");
			
			for (i=0;i<n;i++){
			if(id==bk[i].id){
				printf("\n----------------------------------");
				printf("\nWhich parameter you want to update:\n");
				printf("----------------------------------\n\n");
				printf("1. Book Name\n\n2. Author Name\n\n3. Publication of Book\n\n4. Genre of book\n\n5. No.of pages\n\n6. Price of book\n\n7. Language of book\n\n8. Edition of Book\n");
				printf("\n------------------\nEnter your choice: ");
				scanf("%d",&ch);
				printf("------------------\n");
				if(ch==1){
					printf("\n-----------------------");
					printf("\nEnter new name of book: ");
					fflush(stdin);
					gets(bk[i].name);
					printf("-----------------------\n");
					break;
				}
				if(ch==2){
					printf("\n------------------------------");
					printf("\nEnter new author name of book: ");
					fflush(stdin);
					gets(bk[i].author);
					printf("------------------------------\n");
					break;
				}
				if(ch==3){
					printf("\n---------------------");
					printf("\nEnter new publication: ");
					fflush(stdin);
					gets(bk[i].publication);
					printf("---------------------\n");
					break;
				}
				if(ch==4){
					printf("\n------------");
					printf("\nEnter genre: ");
					fflush(stdin);
					gets(bk[i].genre);
					printf("------------\n");
					break;
				}
				if(ch==5){
					printf("\n-----------------------");
					printf("\nEnter new page numbers: ");
					scanf("%d",&(bk[i].pages));
					printf("-----------------------\n");
					break;
				}
				if(ch==6){
					printf("\n----------------");
					printf("\nEnter new price: ");
					scanf("%d",&bk[i].price);
					printf("----------------\n");
					break;
				}
				if(ch==7){
					printf("\n---------------");
					printf("\nEnter Language: ");
					fflush(stdin);
					gets(bk[i].language);
					printf("---------------\n");
					break;
				}
				if(ch==8){
					printf("\n--------------");
					printf("\nEnter edition: ");
					fflush(stdin);
					gets(bk[i].edition);
					printf("--------------\n");
					break;
				}
			}
		}
				Menu(bk,n,m);
		
}
void removebk(book* bk, int n,int* m){
				int i,BkId,found=0,j;
				printf("\n--------------");
				printf("\nEnter Book id: ");
				scanf("%d",&BkId);
				printf("--------------\n");
			
				for(i=0;i<*m;i++){
					if(BkId==bk[i].id){
						found=1;
							for(j=i;j<*m;j++){
								found=1;
								bk[j]=bk[j+1];
						
					}
				break;	
				}
			}
				if(found==1){
					printf("\n----------------------------");
					printf("\nRecord deleted successfully.");
					printf("\n----------------------------");
					n=n-1;
					Menu(bk,n,m);
			}
				else{
					printf("\n-------------------------------------------------------------------");
					printf("\nEntered Book Id not matched with our record, Enter correct Book Id.\n");
					printf("-------------------------------------------------------------------\n\n");
					Menu(bk,n,m);
				}
				
			}
void temp(book* bk,int i,int n,int* m){
				printf("\n\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
				printf("No.  Id  \tName                Author              Publication\t");
				printf("Genre     Pages\t\tPrice\t\tLanguage\tEdition\n");
				printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
				printf("%-3d  ",i+1);
				printf("%-4d\t",bk[i].id);
				printf("%-20s",bk[i].name);
				printf("%-20s",bk[i].author);
				printf("%s\t\t",bk[i].publication);
				printf("%-10s",bk[i].genre);
				printf("%-5d\t\t",bk[i].pages);
				printf("%-5d\t\t",bk[i].price);
				printf("%s\t\t",bk[i].language);
				printf("%s\n",bk[i].edition);
				printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
				Menu(bk,n,m);
}
void storeagain(book* bk,int n,int* m){
		int n1,i,n2,i1=1;
		int* m2;
		printf("How many book you want to save: ");
		scanf("%d",&n1);
		m2=&n1;
		if(n1<n){
			n1=n+n1;
			for(i=n;i<=n1-1;i++){
			printf("\n--------------------------\n");
			printf("Enter Book No.%d details--",i1);
			printf("\n--------------------------\n\n");
			printf("Enter id of book      	: ");
			scanf("%d",&bk[i].id);
			printf("\nEnter the name of book	: ");
			fflush(stdin);
			gets(bk[i].name);
			printf("\nEnter the author name 	: ");
			fflush(stdin);
			gets(bk[i].author);
			printf("\nEnter publication     	: ");
			fflush(stdin);
			gets(bk[i].publication);
			printf("\nEnter Genre		: ");
			fflush(stdin);
			gets(bk[i].genre);
			printf("\nEnter no. of pages    	: ");
			scanf("%d",&bk[i].pages);
			printf("\nEnter price           	: ");
			scanf("%d",&bk[i].price);
			printf("\nEnter language of book	: ");
			fflush(stdin);
			gets(bk[i].language);
			printf("\nEnter edition         	: ");
			fflush(stdin);
			gets(bk[i].edition);
			printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
			i1++;
		}
		m=&n1;
}
		else{		//address of count
		//printf("%d",&m);		//total number of book
		for (i=n;i<n+n1;i++){
			printf("\n--------------------------\n");
			printf("Enter Book No.%d details--",i1);
			printf("\n--------------------------\n\n");
			printf("Enter id of book      	: ");
			scanf("%d",&bk[i].id);
			printf("Enter the name of book	: ");
			fflush(stdin);
			gets(bk[i].name);
			printf("Enter the author name 	: ");
			fflush(stdin);
			gets(bk[i].author);
			printf("Enter publication     	: ");
			fflush(stdin);
			gets(bk[i].publication);
			printf("Enter Genre		: ");
			fflush(stdin);
			gets(bk[i].genre);
			printf("Enter no. of pages    	: ");
			scanf("%d",&bk[i].pages);
			printf("Enter price           	: ");
			scanf("%d",&bk[i].price);
			printf("Enter language of book	: ");
			fflush(stdin);
			gets(bk[i].language);
			printf("Enter edition         	: ");
			fflush(stdin);
			gets(bk[i].edition);
			printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
			i1++;
	}
	*m=*m+*m2;
}
		
		n=*m;
		Menu(bk,n,m);
}
void temp1(book* bk,int n,int* m){
				printf("\n\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
				printf("No.  Id  \tName                Author              Publication\t");
				printf("Genre     Pages\t\tPrice\t\tLanguage\tEdition\n");
				printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
				printf("\t\t\t\t\t\t\t\tNo data present in database.\n");
				printf("-----------------------------------------------------------------------------------------------------------------------------------------\n");
				*m=*m-1;
				Menu(bk,n,m);
}
