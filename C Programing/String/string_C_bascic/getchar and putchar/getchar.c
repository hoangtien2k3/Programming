
/*
    Khai báo hàm getchar() trong C
    hàm "getchar" dùng để nhập vào 1 ký tự từ bàn phím

    syntax: int getchar(void)
            + Tham số: Hàm này không nhận bất kỳ tham số nào.
            + Trả về giá trị: Hàm này trả về ký tự được đọc dưới dạng một unsigned char 
            được ép kiểu thành một int hoặc EOF hoặc lỗi.

*/

#include <stdio.h>

int main ()
{
   char c;
 
   printf("Nhap ky tu: ");
   c = getchar();
 
   printf("Ky tu vua nhap: ");
   putchar(c);

   return(0);
}