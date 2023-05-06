#include <stdio.h>

/*Function Prototype*/
/*Function to insert a member through an array*/
void InsertIntoArray(int Arr[], int Size, int Value, int Position);

/*This is the main*/
int main()
{
	/*Defining the Array*/
	int Arr[20] = {0}, ArraySize, i, Value, Position;
	
	/*Scanning array values from the user*/
	for(i = 0; i < 10; i++)
	{
		printf("Please, Enter Number %d: ", (i + 1));
		scanf(" %d", &Arr[i]);
	}
	
	/*Scanning the value and position from the user*/
	printf("Please, Enter the value to insert: ");
	scanf("%d", &Value);
	
	printf("Please, Enter the Position: ");
	scanf("%d", &Position);

	/*Calculating array size*/
	ArraySize = sizeof(Arr)/sizeof(int);

	/*Calculating the current position to insert*/
	Position = Position - 1;

	
	/*Calling the function to insert the value into the array*/
	InsertIntoArray(Arr, ArraySize, Value, Position);
		
	/*Printing the Array Elements after inserting*/
	for(i = 0; i < 20; i++)
	{
		printf("Arr[%d]: %d\n", (i + 1), Arr[i]);
	}
	
	return 0;
}
	

/*Function Implementation*/
void InsertIntoArray(int Arr[], int Size, int Value, int Position)
{
	/*Defining variables*/
	int i;
	
	for(i = (Size - 1); i > Position; i--)
	{
		Arr[i] = Arr[i - 1];	
	}
	
	Arr[Position] = Value;
}
