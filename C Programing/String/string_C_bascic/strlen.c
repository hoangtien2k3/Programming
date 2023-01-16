
// Syntax: size_t strlen(const char *str)

#include <stdio.h>
#include <string.h>

int main ()
{
   char str[20];
   int len;

   strcpy(str, "Hoc C co ban");

   len = strlen(str);
   printf("Do dai cua chuoi: %d", len);
   
   return(0);
}