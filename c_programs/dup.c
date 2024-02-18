#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
void main()
{
	int fd1,fd2;
	int n,n1;
	char buff[100];
	fd1=open("f1.txt",O_RDONLY);
	fd2=dup(fd1);
	n=read(fd1,buff,10);
	write(1,buff,n);
  n1=read(fd2,buff,10);
        write(1,buff,n1);

}
