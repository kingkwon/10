#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Practice 05
int main(void) {
	
	int i;
	int grade[5];
	int avg =0;
	
	for(i=0; i<5; i++)
	{
		printf("input grade[%i] = ", i);
		scanf("%d", &grade[i]);
	}
	
	for(i=0; i<5; i++)
	{
		printf("grade[%d] = %d\n", i, grade[i]);
	}
	
	for(i=0; i<5; i++)
	{
		avg += grade[i];
	}
	
	printf("The average is %i.\n", avg/5);
	
	return 0;
}
