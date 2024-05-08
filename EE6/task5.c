/*Now, we want to add the Last name of all people in the file. Ask the names and save them together 
with the already existing data in a new file. Print the list of data:
Enter the first name of Prit: Ginoya
Enter the first name of Yash: Patel
Enter the first name of Yogi: Suthar
following data was entered:
name: Prit 
last name: Ginoya
age: 22
salary: 10000
name: Yash 
last name: Patel
age: 21
salary: 9500
name: Yogi 
last name: Suthar
age: 20
salary: 10500*/

#include<stdio.h>
#include<string.h>
struct person
{
	char name[20];
	char lastName[20];
	int age;
	int salary;
};
int main()
{
	struct person temp;
	FILE *fp1,*fp2;
	fp1=fopen("person_database","r");
	if(fp1==NULL)
	{
		perror("fopen");
		return 0;
	}
	fp2=fopen("person_database_new","w+");
	if(fp2==NULL)
	{
		perror("fopen");
		return 0;
	}
	while((fscanf(fp1,"%s%d%d",temp.name,&temp.age,&temp.salary))==3)
	{
		printf("Enter the first name of %s: ",temp.name);
		scanf("%s",temp.lastName);
		fprintf(fp2,"%s %s %d %d\n",temp.name,temp.lastName,temp.age,temp.salary);
	}
	rewind(fp2);
	while((fscanf(fp2,"%s%s%d%d",temp.name,temp.lastName,&temp.age,&temp.salary))==4)
		printf("Name: %s\nlast name: %s\nage: %d\nsalary: %d\n",temp.name,temp.lastName,temp.age,temp.salary);

	fclose(fp1);
	fclose(fp2);

}
