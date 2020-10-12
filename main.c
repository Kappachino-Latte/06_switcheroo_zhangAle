#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int arr [10];
	
	srand ( time(NULL) );
	
	int i;
	for (i = 0; i<10; i++)
		arr[i] = rand();
	
	arr[9] = 0;
	
	for (i = 0; i<10; i++)
		printf ("arr[%d]: %d\n", i, arr[i]); 
	printf ("\n");
	
	int arr2 [10];
	int *ap = arr;
	int *ap_2 = arr2;
	
	for (i = 0; i<10; i++)
		*(ap_2 + i) = *(ap + 9 - i);
	
	for (i = 0; i<10; i++)
		printf ("arr2[%d]: %d\n", i, arr2[i]); 
	printf ("\n");
	
	return 0;
}
	
