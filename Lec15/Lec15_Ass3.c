#include <stdio.h>

/*New Struct type definition*/
typedef struct
{
	int Seconds;
	int Minutes;
	int Hours;
}TimePeriod;

/*Function Prototype*/
/*A function to calculate the difference between two periods of time*/
TimePeriod FindDifference(TimePeriod Period1, TimePeriod Period2);

/*This is the main*/
int main()
{
	/*Defining TimePeriod struct variable*/
	TimePeriod Period1, Period2, Difference;
	
	/*Scanning Period1 and Period2 from the user*/
	printf("Enter the begin Time: ");
	scanf("%d %d %d", &Period1.Hours, &Period1.Minutes, &Period1.Seconds);
	printf("Enter the final Time: ");
	scanf("%d %d %d", &Period2.Hours, &Period2.Minutes, &Period2.Seconds);
	
	/*Calling a function to return the difference between two periods of time*/
	Difference = FindDifference(Period1, Period2);
	
	/*Printing the Difference between two periods of time*/
	printf("Difference is (Hours: %d, Minutes: %d, Seconds: %d)\n", Difference.Hours, Difference.Minutes, Difference.Seconds);
	
	/*Returning to the operating system*/
	return 0;
}

TimePeriod FindDifference(TimePeriod Period1, TimePeriod Period2)
{
	/*Defining TimePeriod struct variable*/
	TimePeriod Difference;
	
	/*Calculating difference between two periods of time*/
	Difference.Hours = Period2.Hours - Period1.Hours;
	Difference.Minutes = Period2.Minutes - Period1.Minutes;
	Difference.Seconds = Period2.Seconds - Period1.Seconds;
	
	/*Correcting the Difference if there are remainders*/
	if(Difference.Seconds < 0)
	{
		Difference.Seconds = Difference.Seconds + 60;
		Difference.Minutes--;
	}

	if(Difference.Minutes < 0)
	{
		Difference.Minutes = Difference.Minutes + 60;
		Difference.Hours--;
	}

	return Difference;
}
