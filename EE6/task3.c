/*Write a program that reads the data from the file written in the Task#2 . Print the data to the screen 
as follows:
name: Prit 
age: 22
salary: 10000
name: Yash 
age: 21
salary: 9500
name: Yogi 
age: 20
salary: 10500*/
#include<stdio.h>
struct person
{
	char name[20];
	int age;
	int salary;
};
int main()
{
	struct person temp;
	FILE *fp;
	fp=fopen("person_database","r");
	if(fp==NULL)
		perror("fopen");
	while((fscanf(fp,"%s%d%d",temp.name,&temp.age,&temp.salary))==3)
		printf("name: %s\nage: %d\nsalary: %d\n",temp.name,temp.age,temp.salary);
	fclose(fp);
}
