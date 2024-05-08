/*Extend task#1 that further reads name, age and salary of a chosen number of people and stores 
that information into a file. All data of 1 person is stored in a structure. Once the data of 1 person is 
2
read, the structure containing that data is written to a file at once. Afterwards, the data of the next 
person is read, … Make sure the names can contain spaces!
How many people do you want to enter? 3
Enter name: Prit
Enter age: 22
Enter salary: 10000
Enter name: Yash
Enter age: 21
Enter salary: 9500
Enter name: Yogi
Enter age: 20
Enter salary: 10500*/

#include<stdio.h>
struct person
{
	char name[20];
	int age;
	int salary;
};
void readPerson(int);
int main()
{
	int noOfPersons;
	printf("How many people do you want to enter? ");
	scanf("%d",&noOfPersons);
	readPerson(noOfPersons);
}
void readPerson(int noOfPersons)
{
	FILE *fp;
	int i;
	struct person persons;
	fp=fopen("person_database","w");
	if(fp==NULL)
		perror("fopen");
	for(i=0;i<noOfPersons;i++)
	{
		printf("Enter name: ");
		scanf("%s",persons.name);
		printf("Enter age: ");
		scanf("%d",&persons.age);
		printf("Enter salary: ");
		scanf("%d",&persons.salary);
		fprintf(fp,"%s %d %d\n",persons.name,persons.age,persons.salary);
	}
	fclose(fp);
}




