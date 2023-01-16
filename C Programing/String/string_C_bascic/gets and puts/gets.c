
// syntax: gets(string) :

#include<stdio.h>  
void main ()  
{  
    char s[30];  
    printf("Enter the string? :");  
    gets(s);  
    printf("You entered: %s",s);  
    return 0;
}  