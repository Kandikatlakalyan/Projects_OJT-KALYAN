#include<stdio.h>

struct book 
{
	int book_id;
	char book_name[100];
	char author_name[100];
	char subject[10];
};

void struct_book_id(struct book *bk,int bookid)
{
	for(int i=0;i<3;i++)
	{
		if((bk+i)->book_id==bookid)
			printf("Book is present and the book is %s\n",bk[i].book_name);
	}
}

int fun_pointer(struct book *bk)
{
	static int i;
	for( i=0;i<3;i++)
	{
		return (bk+i)->book_id;
	}
}
int main() 
{
struct book b[3];
int search_book;
for(int i=0;i<3;i++)
	{
		printf("Enter the book number %d ID::\n",i+1);
		scanf("%d",&b[i].book_id);
		printf("Enter the book name::\n");
		scanf("%s",b[i].book_name);
		printf("Enter the book author name::\n");
		scanf("%s",b[i].author_name);
		printf("Enter the subject of book::\n");
		scanf("%s",b[i].subject);
		printf("\n");
	}	
printf("\n");
printf("\n");
printf("Book details are::\n");
printf("\n");
printf("\n");

for(int i=0;i<3;i++)
	{
		printf("ID = %d\n",b[i].book_id);
		printf("Book Name = %s\n",b[i].book_name);
		printf("Book Author Name = %s\n",b[i].author_name);
		printf("Book Subject = %s\n",b[i].subject);
		printf("\n");
	}
printf("\n");
printf("\n");
printf("Enter the Book ID to be searched\n");
scanf("%d",&search_book);
struct_book_id(b,search_book);
for(int i=0;i<3;i++)
{
	printf("%d\n",fun_pointer(b));
}
}
