/*
    memcpy() is used to copy a block of memory from a location to another. It is declared in string.h

    void * memcpy(void *to, const void *from, size_t numBytes);

    Tác dụng của hàm là sao chép num byte từ vị trí mà source trỏ tới đến vị trí mà destination trỏ tới

    + Tác dụng của hàm này khác với strcpy(), strcpy() sao chép vùng nhớ từ vị trí mà source 
    trỏ tới cho tới vị trí của kí tự ‘\0’ tới destination, do đó destination có giá trị 
    chuỗi giống với source, còn với memcpy() thì việc sao chép như thế nào hoàn toàn 
    do người dùng kiểm soát. Tùy trường hợp mà sử dụng 2 hàm này.

*/
//Note:  memcpy() doesn’t check for overflow or \0
//      memcpy() leads to problems when source and destination addresses overlap. 
#include <stdio.h>
#include <string.h>
// void * memcpy(void *to, const void *from, size_t numBytes);
int main()
{
    char str1[30] = "We";
    char str2[30] = "World";

    memcpy(str1, str2, sizeof(str2)); // chuỗi str1 copy chuỗi 2 và in ra chuỗi str1
    printf(" %s\n", str1);

    return 0;
}