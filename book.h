#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct book{
	int id;
	char name[100];
	char author[100];
	char publication[100];
	char genre[100];
	int pages;
	int price;
	char language[100];
	char edition[100];
}book;
void storebk(book*,int);
void displaybk(book*,int,int*);
void searchbk(book*,int,int*);
void updatebk(book*,int,int*);
void removebk(book*,int,int*);
void temp(book*,int,int,int*);
void Menu(book*,int,int*);
void storeagain(book*,int,int*);
void temp1(book*,int,int*);
