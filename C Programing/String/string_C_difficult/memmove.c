/*
    memmove() is used to copy a block of memory from a location to another. It is declared in string.h

    syntax: void * memmove(void *to, const void *from, size_t numBytes);

*/

/* A C program to demonstrate working of memmove */
// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char str1[] = "Geeks"; // Array of size 100
// 	char str2[] = "Quiz"; // Array of size 5

// 	puts("str1 before memmove ");
// 	puts(str1);

// 	/* Copies contents of str2 to sr1 */
// 	memmove(str1, str2, sizeof(str2));

// 	puts("\nstr1 after memmove ");
// 	puts(str1);

// 	return 0;
// }



//////// Difference between memcpy and memmove in C/C++ 
// Sample program to show that memmove() is better than
// memcpy() when addresses overlap.
#include <stdio.h>
#include <string.h>
int main()
{
	char str[100] = "Learningisfun";
	char *first, *second;
	first = str;
	second = str;
	printf("Original string :%s\n ", str);
	
	// when overlap happens then it just ignore it
	memcpy(first + 8, first, 10);
	printf("memcpy overlap : %s\n ", str);

	// when overlap it start from first position
	memmove(second + 8, first, 10);
	printf("memmove overlap : %s\n ", str);

	return 0;
}

