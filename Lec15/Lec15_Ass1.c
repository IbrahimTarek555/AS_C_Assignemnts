#include <stdio.h>

/*Defining a struct type to carry a student information*/
typedef struct
{
	char Name[20];
	int Roll;
	float Marks;
}
Student;


/*This is the main*/
int main()
{
	/*Defining a variable of type Student*/
	Student Student1;
	
	/*Scanning student information from the user*/
	printf("Filling Information\n\n");
	printf("Enter Student Name (without spaces): ");
	scanf("%19s", Student1.Name);
	printf("Enter Student Roll: ");
	scanf("%d", &Student1.Roll);
	printf("Enter Student Marks: ");
	scanf("%5f", &Student1.Marks);
	
	/*Displaying student information*/
	printf("\nDisplaying Information\n\n");
	printf("Student Name: %s\n", Student1.Name);
	printf("Student Roll: %d\n", Student1.Roll);
	printf("Student Marks: %f\n", Student1.Marks);
	
	/*Returning to the operating system*/
	return 0;
}
