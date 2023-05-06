#include <stdio.h>

/*This is the main*/
int main()
{
	/*Defining variables*/
	int i = 0, j, k, Correct = 0, CorrectSize = 0;
	float Percentage;
	
	/*Defining and intialinzing our reference array of strings*/
	char Words[10][12] = {"property", "probability", "program", "process", "progress", "problem", "propagation", "performance", "perfect", "perfume"};
	
	/*
	 * Defining an array carry the state of every word,
	 * If WordStatep[i] = 1, that mean that this word is elicted to be the predicted word.
	 * If WordStatep[i] = 0, that mean that this word is not similar, because we find out the there is a letter the user inputs does not exist in it.
	 */
	int WordState[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	
	/*
	 * Defining an array carry the Elimination state of every word,
	 * If WordEliminate[i] = 1, that mean that we printed this word to the user and he Eliminate it.
	 * If WordEliminate[i] = 0, that mean that this word is still could be predicted to the user.
	 */
	int WordEliminate[10] = {0};
	
	/*Defining a char to carry the letter from the user to search with it*/
	char Key;
	
	/*Do While loop to run out the program of predict*/
	do
	{
		/*Scanning the character in the word from the user*/
		printf("Please, enter chracter %d in the word: ", (i + 1));
		scanf(" %c", &Key);
		
		/*Validating the char scanned from the user*/
		if(!((Key >= 'a') && (Key <= 'z')))
		{
			printf("Invalid Input!\n");
			break;
		}
		
		/*Looping over the array of words to search the words with the inputted key*/
		for(j = 0; j < 10; j++)
		{
			/*If the letter i in the word j equal the key of loop i*/
			if(*(*(Words + j) + i) == Key)
			{
				/*And If that word still can be predicted, it could not be predicted if a previous letter isn't equal a previous key*/
				if(*(WordState + j) != 0)
				{
					/*Save the word state to be 1*/
					*(WordState + j) = 1;
				}	
			}
			else
			{
				/*Else mean that this word has a difference letter, then turn state into 0*/
				*(WordState + j) = 0;
			}
		}
		
		/*Loop to search the words that still could be predicted, then print the first one can be predicted*/
		for(k = 0; k < 10; k++)
		{
			/*If the word State is 1 and the user doesn't eliminate it yet print it*/
			if((*(WordState + k) == 1) && (*(WordEliminate + k) == 0))
			{
				/*printing the word to the user*/
				printf("Is the word is %s?\n", *(Words + k));
				
				/*Break the loop to not print another word*/
				break;
			}
		}

		/*If k (The iterator of the previous loop) = 10 that mean that all words states is 0 or the user eliminate any of them*/
		if(k == 10)
		{
			/*That mean that the word doen't existed and break the program*/
			printf("Sorry, the word doesn't exist!");
			break;
		}
		
		/*Scanning if the word is correct or not*/
		printf("If true, enter 1, if false enter 0: ");
		scanf("%d", &Correct);
		
		/*Validating the input number from the user*/
		if(!((Correct == 0) || (Correct == 1)))
		{
			printf("Invalid Number!");
			break;
		}

		/*If the isn't correct, Eliminate it so the program won't predict it*/
		if(Correct == 0)
		{
			*(WordEliminate + k) = 1;
		}
		
		/*Incrementing the iterator*/
		i++;
	}
	while((i < 12)&&(Correct == 0));
	
	/*If i = 12 that mean that the loop worked until the maximum word letters number is reached that means that the word doesn't exist*/
	if(i == 12)
	{
		printf("Sorry, the word doesn't exist!");
	}
	
	/*If Correct = 1 that mean that the program goes well*/
	if(Correct == 1)
	{
		printf("Thanks for using Predict function!\n");
		
		/*Finding the length of the correct word*/
		while(*(*(Words + k) + CorrectSize) != '\0')
		{
			CorrectSize++;
		}
		
		/*Calculating the percentage of the input letters out of the whole word, then printing it*/
		Percentage = (float) i / (float) CorrectSize * 100;
	
		printf("Percentage of the input letters out of the whole word is %.2f%%\n", Percentage);
	}
	
	/*Returning to the operating system*/
	return 0;
}
