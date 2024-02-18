#include<stdio.h>
#include<string.h>
typedef struct student
{
	char name[100];
	int roll_num;
	float marks;
}students;
students *data;
students* struct_fun(void)
{
        students temp;
	strcpy(temp.name,"Rahul");
	temp.roll_num=123;
	temp.marks=89.32;
        
        data = &temp;
	
	printf("student name::%s\n",data->name);
	printf("student roll number::%d\n",data->roll_num);
	printf("student marks::%f\n",data->marks);
	return data;
}

int main()
{
	students *struct_ptr;
	struct_ptr=struct_fun();
        return 0;
}
