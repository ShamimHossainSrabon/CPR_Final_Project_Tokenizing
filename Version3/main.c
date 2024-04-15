/*
General Information on
===========================
Source file Name: main.ca

This is the main program to start the solution and complete it.

The main purpose of the file 
1. Include all base libraries.
2. Offer an option to the user.
3. Handle unexpected menu selections
4. Finally, quit the program. 

Credit:
Group Name		: Bb 4
Group Members	: Students of Seneca College
Course 			: CPR 101

Supervisor		: Professor Raymond Wong

Revision		: 1.0.5
Version 		: 1

License 		: Not Defined 

Release date	: 16 April 2024
Support			: mrkarim6@myseneca.ca
*/

// Start program

/* Header start */
//
// Include the Stander C libraries.
#include <stdio.h>
//
// Incude libraries to simulate string tokenization operations.
#include "tokenizing.h"
/* Header End */

/* Start the main function */
int main(void)
{
	/*
	// Declare an array with a length of ten characters.
	*/
	char buff[10];
	
	// Start the looping to offer options to user
	do
	{
		/* -- Option Print start --*/
		printf("Which module to run?\n");
		printf("4 - Tokenizating\n");
		printf("0 - Finish\n");
		printf("Your selectiong\n");
		/* -- Option print end --*/
		
		/*
		// Receive user input in a the variable buffer 
		// as a standard input
		*/
		fgets(buff,10,stdin);
		
		/*
    	// Operation to excute user selection option throught the switch case. 
        // The switch case takes the first character from the buffer and reads it from the user.
		*/		
		switch (buff[0])
		{	
			/*
			// Call the execution for string tokenazation
			*/
			case '4' :	tokenizing();	break;
			
			/*
			// Handle the input when the user wants to get out of the section.
			*/
			case '0' :	            	break;

			/*
			// Handle the exception if the user selects the wrong input.
			*/	
			default  :	printf("Bad selection!\n");
		}
		
	}
	/*
	// Continue the loop unless the user presses zero on the keyboard 
	*/	
	while(buff[0] != '0');
	
	return 0;
}
/* End the main function */


// end program 