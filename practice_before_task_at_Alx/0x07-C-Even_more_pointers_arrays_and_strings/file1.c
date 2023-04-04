#include <stdio.h>
/**
 * main- entry point
 * programmer - abbey
 * Return Always (0)
*/

int main(){

	int var;
	int *ptr;
	int **pptr;
	
	var = 3000;
	
	/* take the address of var  */
	pptr = &ptr;

	/* take the value using pptr */
	printf("Value of var = %d\n", var);
	printf("Value of *ptr = %d\n", *ptr);
	printf("Value of **pptr = %d\n", **pptr);

	return 0;
}
