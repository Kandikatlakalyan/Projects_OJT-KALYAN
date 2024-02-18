#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(int argc,char *argv[])
{
/*	for(unsigned int i=0;i<argc;i++)
	{
		printf("%s\n",argv[i]);
*///	}
	char buf[100];
	int fd=open("f1.txt",O_RDONLY);
	int n=read(fd,buf,50);
	write(1,buf,n);
//	printf("The fd is :%d",fd);
//	int rv=fcntl(fd,F_DUPFD,54);
//	printf("Duplicate fd is %d",rv);
   	int flags=fcntl(fd,F_GETFL,0);
	close(fd);
	fd=open("f1.txt",O_RDWR);
	write(1,buf,10);
	flags=flags|O_APPEND;
	write(1,buf,10);

	fcntl(fd,F_SETFL,flags);

	return 0;
}
