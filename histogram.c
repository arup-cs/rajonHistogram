#include <stdio.h>
#include<string.h>
	
/**
 * Prints a histogram to the screen using horizontal bar chart.
 * Parameters:
 *   list - a list of integers
 *   n - the number of values in the list
 */
void printHistogram ( int *hist, int n );

/**
 * This program requests data from the user and then
 * computes and prints a histogram. You may assume that
 * the data values entered are in the range of 0 to 9.
 */
int main ( void )
{
	int i, n;

	// Data entry
	//
	printf ("How many values in your data set? ");
	scanf ("%d", &n);

	int list[n];
	for (i=0; i < n; i++) {
		printf ("Enter a value: ");
		scanf ("%d", &list[i]);
	}

	// Processing data to compute histogram
	//
	int hist[10];    
	memset(hist,0,sizeof(hist));
	for(i=0;i<n;i++){
		hist[list[i]]=hist[list[i]]+1;
		
	}

	// Printing histogram
	printHistogram ( hist, 10);

	return 0;
}

void printHistogram ( int *list, int n )
{
    int i, j;

    for (i=0; i < n; i++) {
		printf ("[%d] ", i);
		for (j = 0; j < list[i]; j++)
			printf ("*");
    	printf ("\n");
    }
}
