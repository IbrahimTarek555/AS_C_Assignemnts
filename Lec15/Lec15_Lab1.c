#include <stdio.h>

/*Program goes well but there is a problem with filling data, I think it has ralation with casting*/

/*New struct type definition*/
typedef struct
{
	int ID;
	int Maths, Language, Physics, Chemistry;
	char Name[10];
}Student;

/*This is the main*/
int main()
{
	/*Defining Array of struct student*/
	Student Arr[10];
	
	/*Defining variables, iterators and flags*/
	int i, j, NullChar, Who, ID, ExistFlag = 0;
	
	/*Defining array of names to fill the students names*/
	char *NamesArr[10] = {"Ahmed", "Amr", "Hamada", "Mona", "Heba", "Ali", "Azza", "Ibrahim", "Omnia", "Donia"};
	
	/*Filling the Array of students with data*/
	for(i = 0; i < 10; i++)
	{
		/*Filling the students IDs*/
		Arr[i].ID = i + 5;
		
		/*Searching for the null character*/
		NullChar = 0;
		while(NamesArr[i][NullChar] != '\0')
		{
			NullChar++;
		}
		
		/*Copying the name from the array of names to its destination*/
		for(j = 0; j < (NullChar + 1); j++)
		{
			Arr[i].Name[j] = NamesArr[i][j];
		}
		
		/*Filling the grades of students*/
		Arr[i].Maths = (4 * i) + 20;
		Arr[i].Language = (4 * i) + 30;
		Arr[i].Physics = (4 * i) + 40;
		Arr[i].Chemistry = (4 * i) + 50;
	}
	
	/*Scanning the ID the user want to search*/
	printf("Please, Enter student ID: ");
	scanf("%d", &ID);
	
	/*Searching for the ID to find the student with this ID*/
	for(i = 0; i < 10; i++)
	{
		if(Arr[i].ID == ID)
		{
			/*Extracting the number of the student in the array of students*/
			Who = i;
			
			/*Flag to find out if the ID exist or not*/
			ExistFlag = 1;
		}
	}
	
	/*If the flag is not set, then tell the user that the ID doesn't exist*/
	if(ExistFlag == 0)
	{
		printf("Invalid ID Input!\n");
	}
	else
	{
		printf("%s has grades:\nFor Maths: %d\nFor Language: %d\nFor Physics: %d\nFor Chemistry: %d", Arr[Who].Name, Arr[Who].Maths, Arr[Who].Language, Arr[Who].Physics, Arr[Who].Chemistry);
	}
	
	/*Returning to the operating system*/
	return 0;
}