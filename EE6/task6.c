/*Add each Person also street, number, postal code and state information in file.*/

#include<stdio.h>
#include<string.h>
struct person
{
	char name[20];
	char lastName[20];
	char street[20];
	char mobileNumber[15];
	int pincode;
	char state[20];
	int age;
	int salary;
};
int main()
{
	struct person temp;
	FILE *fp1,*fp2;
	fp1=fopen("person_database_new","r");
	if(fp1==NULL)
	{
		perror("fopen");
		return 0;
	}
	fp2=fopen("person_database_new2","w+");
	if(fp2==NULL)
	{
		perror("fopen");
		return 0;
	}
	while((fscanf(fp1,"%s%s%d%d",temp.name,temp.lastName,&temp.age,&temp.salary))==4)
	{
		printf("Enter the street of %s: ",temp.name);
		scanf("%s",temp.street);
		printf("Enter the Mobile number of %s: ",temp.name);
		scanf("%s",temp.mobileNumber);
		printf("Enter the pincode of %s: ",temp.name);
		scanf("%d",&temp.pincode);
		printf("Enter the state of %s: ",temp.name);
		scanf("%s",temp.state);
		fprintf(fp2,"%s %s %d %d %s %s %d %s\n",temp.name,temp.lastName,temp.age,temp.salary,temp.street,temp.mobileNumber,temp.pincode,temp.state);
	}
	rewind(fp2);
	while((fscanf(fp2,"%s%s%d%d%s%s%d%s",temp.name,temp.lastName,&temp.age,&temp.salary,temp.street,temp.mobileNumber,&temp.pincode,temp.state))==8)
		printf("Name: %s\nlast name: %s\nage: %d\nsalary: %d\nstreet: %s\nmobile number: %s\npincode: %d\nstate: %s\n",temp.name,temp.lastName,temp.age,temp.salary,temp.street,temp.mobileNumber,temp.pincode,temp.state);

	fclose(fp1);
	fclose(fp2);

}
