#include <stdio.h>
#include <stdlib.h>
#include "main.h"


int main (int ac, char **argv){
	
	char *prompt = "(M4onshell) > ";	
	char *lineptr;
	size_t n =  0;




	(void)ac; (void)argv;
	/**
	 *  Adding infinite loop -
	 *  The ensures the shell doesn't close out after execution 
	*/

	while (1){
	/* printing the prompt to screen */
	printf("%s", prompt);
	getline(&lineptr, &n, stdin);
	printf("%s\n", lineptr);


	/* free up allocated memory */
	free(lineptr);

	}


	return (0);
}
