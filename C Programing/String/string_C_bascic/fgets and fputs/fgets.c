
// syntax: fgets(string, size, stdin);
//          string: tên chuỗi
//          size: số lượng phần tử chuỗi
//          stdin: lệnh bắt buộc

#include<stdio.h>  
void main()   
{   
   char str[20];   
   printf("Enter the string: ");  
   fgets(str, 20, stdin);   
   printf("Output string: %s", str);   

}   