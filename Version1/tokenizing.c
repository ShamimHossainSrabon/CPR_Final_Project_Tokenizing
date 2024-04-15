/*
General Information on
===========================
Source file Name: tokenizing.c

TOKENIZING MODULE SOURCE 

This is the source file of string tokenizing operation

The main purpose of the file 
1. Include Macro
2. Include user-defined libraries
3. Perform the actual logic of operations. 

Credit:
Author          : Shamim Hossain Srabon
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

// Start Program 

/*
 * Tells the compiler not to issue warnings when these unsafe functions are used. A quick fix
 * to suppress warnings without addressing the underlying issue of using unsafe functions.
 */
#define _CRT_SECURE_NO_WARNINGS

//
// Define a macro for the input buffer array size.
#define BUFFER_SIZE 300

//
// Include the user-defined header file.
#include "tokenizing.h"

/*
 * Method Purpose     : The function finds a character opsition in a string.
 * Input peerameter : None 
 * Output peerameter: None
 */
void tokenizing(void)
{
	//
	// Print the boot message of the program. 	
	printf("*** Start of Tokenizing Words Demo ***\n");

	//
	// Declare a variable in the chacater array with the length of the double buffer size.		
	char words[BUFFER_SIZE];
	
	//
	// Declare a variable in the chacater array with the length of the buffer size.		
	char* nextWord = NULL;
	//
	// Declare the variable to word counter
	int wordsCouter;
	
	//
	// Used "do while" to ensure at least one input by the user
	//		
	do
	{
		// Display mesage to accept an not empy strig
		printf("Type a few words separated by space (q - to quit):\n");
		
		//
		// Accept user input with length of BUFFER_SIZE		
		fgets(words, BUFFER_SIZE, stdin);
		//
		// Define the last buffer NULL value 		
		words[strlen(words) - 1] = '\0';
		
		//
		// Check and allow users if they are not entered by zero		
		if (strcmp(words, "q") != 0)
		{
			//
			// Traverse the first word
			nextWord = strtok(words, " ");
			
			//
			// Set initial count
			wordsCouter = 1;
			
			// More next word
			while(nextWord)
			{
				// Print the curren word
				printf("Word #%d is \'%s\'\n", wordsCouter++, nextWord);
				
				//
				// Traverse the next word				
				nextWord = strtok(NULL, " ");
			}
		}
	}
	// Continue the program until the user presses 'q'
	while (strcmp(words, "q") != 0);
	
	//
	// Print the end message of the program. 
	printf("*** End of Tokenizing Words Demo ***\n\n");
}

// End Program 
		