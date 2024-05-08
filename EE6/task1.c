/*Write a program that asks the user to enter the name and the home town of 3 persons. Name and 
home town are stored in a structure Person. The 3 persons are stored in an array. Afterwards, the 
program asks the user to enter a name and searches the town that person lives in.
Use the functions readPerson and searchTown
The function searchTown has 2 arguments:
- the array that needs to be searched
- a variable of the type Person that contains the name that needs to be searched. The town member 
of that variable needs to be filled with the town found by the function searchTown.
Reading the name of the person you want to search for is done in the main function. Printing the 
resulting town can also be done in the main function. If the name entered is not present in the array, 
an appropriate message needs to be printed.
Enter name: Prit
Enter town or city: Rajkot
Enter name: Yash
Enter town or city: V V Nagar
Enter name: Yogi
Enter town or city: Anand
==========================================================
Enter the name of the person you want to search for: Yogi
This person lives in Anand*/
#include<stdio.h>
#include<string.h>
struct person
{
	char name[20];
	char homeTown[20];
};
void readPerson(struct person persons[]);
int searchTown(struct person persons[],char name[]);
int main()
{
	char name[20];
	int index;
	struct person persons[3];
	readPerson(persons);
	printf("Enter the name of the person you want to search for:");
	scanf("%s",name);
	index=searchTown(persons,name);
	if(index==-1)
		printf("%s not found in Database\n",name);
	else
		printf("This person lives in %s\n",persons[index].homeTown);
}
void readPerson(struct person persons[])
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter name:");
		scanf("%s",persons[i].name);
		printf("Enter town or city:");
		scanf("%s",persons[i].homeTown);
	}
}
int searchTown(struct person persons[],char name[])
{
	int i;
	for(i=0;i<3;i++)
	{
		if(strcmp(name,persons[i].name)==0)
			return i;
	}
	return -1;
}


