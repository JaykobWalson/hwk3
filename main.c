#include <stdlib.h>
#include <stdio.h>
#include "stack.h"
#include "ls2.h"

/**
 * Main function
 * Usage: ls2 <path> [exact-match-pattern]
 */
int main(int argc, char* argv[]) {
	// stack stores the lines to print out
	stack_t *s = initstack();
	if(argv[1] != NULL){
		open(argc);
		for(int i = 0; i < 8192; i++){
			push(s, argv[i]);
		}
	}

	printstack(s);


	open(s);
	printstack(s);
	readPath(argv[1]);

	// // free up stack
	// freestack(s);
	return 0;
}
