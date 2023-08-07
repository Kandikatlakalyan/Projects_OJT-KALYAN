#include <stdio.h>
struct book
{
    int bookid;
    char bookname[10];
    char authorname[10];
    char booksubject[10];
};

int main() {
  struct book b[10];
  for(int i=0;i<3;i++)
  {
	  printf("book %d\n",i+1);
	  printf("Enter book id\n");
      scanf("%d",&b[i].bookid);
      printf("Enter book name\n");
     scanf("%s",b[i].bookname);
     printf("Enter author name\n");
      scanf("%s",b[i].authorname);
      printf("Enter subject\n");
       scanf("%s",b[i].booksubject);
  }
  printf("****************************************\n");
  int check_id;
  printf("Entyer Book Id\n");
  scanf("%d",&check_id);
  for(int i=0;i<3;i++)
  {
      if(check_id==b[i].bookid)
      {
          printf("book name: %s\n",b[i].bookname);
          printf("author name: %s\n",b[i].authorname);
          printf("subject: %s\n",b[i].booksubject);
      }
  }

    return 0;
}
