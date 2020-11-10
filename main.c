#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Practice 03
void main(void) {
	
	int i =4; 
	int j =300;
	
	int *pi_i =&i;
	char *pc_i =&i;
	
	int *pi_j =&j;
	char *pc_j =&j;
		
	printf("%i, %i, %i\n", i, *pi_i, *pc_i);
	printf("%i, %i, %i\n", j, *pi_j, *pc_j);
	
	return 0;
}
