
/*
    syntax: int putchar(int char)
    Hàm putchar sẽ nhận đối số là một ký tự, và xuất ký tự đó ra màn hình.


*/

#include <stdio.h>

int main ()
{
   char ch;

   for(ch = 'A' ; ch <= 'Z' ; ch++) 
   {
      putchar(ch);
      printf (" ");
   }
   
   return(0);
}

