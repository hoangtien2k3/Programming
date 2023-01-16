
//  puts(string): dùng để in chuỗi có khoảng trắng

#include<stdio.h>  
#include <string.h>    

int main(){    
    char name[50];    
    printf("Enter your name: ");    
    gets(name);   
    printf("Your name is: ");    
    puts(name);     
    return 0;    
}   
