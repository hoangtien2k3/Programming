
/*
    memset() in C with examples:
    syntax: int memcmp(const void * ptr1, const void * ptr2, size_t num);
    
    memset() is used to fill a block of memory with a particular value.

    // ptr ==> Starting address of memory to be filled
    // x   ==> Value to be filled
    // n   ==> Number of bytes to be filled starting 
    //         from ptr to be filled
    syntax:   void *memset(void *ptr, int x, size_t n);

*/

#include<stdio.h>
#include<string.h>

int main() {
    char str[50] = "Hoang Anh Tien is name myselt.";
    printf ("\nBefore memset(): %s\n", str);

    // Fill 8 character starting from str[13] with '.'
    memset(str + 13, '.', 8*sizeof(char));

    printf ("After memset(): %s", str);
    return 0;
}

//////////////
// C program to demonstrate working of memset()
#include <stdio.h>
#include <string.h>

void printArray(int arr[], int n)
{
for (int i=0; i<n; i++)
	printf("%d ", arr[i]);
}

int main()
{
	int n = 10;
	int arr[n];

	// Fill whole array with 0.
	memset(arr, 0, n*sizeof(arr[0]));
	printf("Array after memset()\n");
	printArray(arr, n);

	return 0;
}


