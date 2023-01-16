/*
    Hàm strstr được sử dụng để tìm 1 chuỗi con trong 1 chuỗi mẹ.

    Cú pháp:
        char * strstr (const char * str, const char * sub)


    Hàm này tìm kiếm sự xuất hiện của chuỗi con sub trong chuỗi str. 
    Nếu không tìm thấy thì trả về con trỏ NULL. 
    Nếu tìm thấy thì trả về con trỏ trỏ tới vị trí đầu tiên của chuỗi sub được tìm thấy trong chuỗi str.
*/


#include<stdio.h>
#include <string.h>
 
int main() {
    char str[100] = "Day la mot vi du ve ham strstr() trong c, vi du...";
    char *sub;
    sub = strstr(str, "vi");
    if (sub != NULL) {
        printf("\nChuoi con la: %s", sub);
    } else {
        printf("Khong tim tha!\n");
    }
    return 0;
}