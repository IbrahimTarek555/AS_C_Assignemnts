#include <stdio.h>
#include "STD_TYPES.h"

/*Function like macro to set a bit*/
#define SET_BIT(VAR,BIT_NUMBER)	((VAR)|=(1<<(BIT_NUMBER)))

/*Function like macro to clear a bit*/
#define CLR_BIT(VAR,BIT_NUMBER)	((VAR)&=(~(1<<(BIT_NUMBER))))

/*Function like macro to toggle a bit*/
#define TOG_BIT(VAR,BIT_NUMBER)	((VAR)^=(1<<(BIT_NUMBER)))

/*Function like macro to get a bit*/
#define GET_BIT(VAR,BIT_NUMBER)	(((VAR)>>(BIT_NUMBER))&1)

/*This is the main*/
int main()
{
	/*Defining variables*/
	uint8 Num = 13;
	uint8 BitNum = 1;
	uint8 Set = Num, Clr = Num, Tog = Num, Get;
	
	/*Printing the results*/
	SET_BIT(Set,BitNum);
	printf("the result of setting is: %d\n", Set);
	CLR_BIT(Clr,BitNum);
	printf("the result of clearing is: %d\n", Clr);
	TOG_BIT(Tog,BitNum);
	printf("the result of toggling is: %d\n", Tog);
	Get = GET_BIT(Num,BitNum);
	printf("the result of getting is: %d\n", Get);
	
	/*Returning to the operating system*/
	return 0;
}