#include <stdio.h>

/*New struct type definition*/
typedef struct
{
	int ID;
	char Name[20];
	int Grade;
}Student;

/*Functions Prototypes*/
void ScanData(Student *Arr, int Size);
void PrintData(const Student *Arr, int Size);

/*This is the main*/
int main()
{
	/*Defining variables*/
	Student Arr[10];
	int ArrSize;
	
	/*Calculating the size of the array*/
	ArrSize = sizeof(Arr) / sizeof(Student);
		
	/*Calling a function to store data*/
	ScanData(Arr, ArrSize);
	
	/*Calling a function to print data*/
	PrintData(Arr, ArrSize);
	
}


void ScanData(Student *Arr, int Size)
{
	/*Defining variables*/
	int i;
	
	/*A message to the user*/
	printf("Filling Data\n\n");
	
	/*Looping over the array elements and scanning the data*/
	for(i = 0; i < Size; i++)
	{
		/*ID*/
		printf("Enter the student ID: ");
		scanf("%d", &((Arr + i) -> ID));
		
		/*Name*/
		printf("Enter the student Name: ");
		scanf("%19s", &((Arr + i) -> Name));
		
		
		/*Grade*/
		printf("Enter the student Grade: ");
		scanf("%d", &((Arr + i) -> Grade));
		
		/*Printing new line*/
		printf("\n");
	}

}
void PrintData(const Student *Arr, int Size)
{
	/*Defining variables*/
	int i;

	/*A message to the user*/
	printf("Displaying Data\n\n");
	
	/*Looping over the array elements and Printing the data*/
	for(i = 0; i < Size; i++)
	{
		/*ID*/
		printf("ID: %d\n", (Arr + i) -> ID);
		
		/*Name*/
		printf("Name: %s\n", (Arr + i) -> Name);
		
		/*Grade*/
		printf("Grade: %d\n", (Arr + i) -> Grade);
		
		/*Printing new line*/
		printf("\n");
	}

}
