/*Searches the age and wages of a person based upon a name entered by the user
What’s the name of the person you want to search for? Prit 
name: Prit 
age: 22
salary: 10000
*/
#include<stdio.h>
#include<string.h>
struct person
{
	char name[20];
	int age;
	int salary;
};
int main()
{
	struct person temp;
	char name[20];
	FILE *fp;
	fp=fopen("person_database","r");
	if(fp==NULL)
		perror("fopen");
	printf("What's the name of the person you want to search for? ");
	scanf("%s",name);
	while((fscanf(fp,"%s%d%d",temp.name,&temp.age,&temp.salary))==3)
		if(strcmp(temp.name,name)==0)
		{
			printf("name: %s\nage: %d\nsalary: %d\n",temp.name,temp.age,temp.salary);
			break;
		}

	fclose(fp);
}
