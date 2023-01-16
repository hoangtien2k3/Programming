
/*
    Kiểu dữ liệu Boolean là một kiểu dữ liệu có chỉ có thể nhận một trong hai giá trị 
    như đúng/sai (true/false, yes/no, 1/0) nhằm đại diện cho hai giá trị thật (truth value).

*/

// Cách 1: sử dụng thư viện #include<stdbool.h>
#include<stdio.h>
#include <stdbool.h>
 
int main() 
{ 
    bool value = false;
    if (value) { // tương đương với kiểm tra value == true
      printf("value is true");  
    } else {
    printf("value is false");
    }
    return 0; 
}


// Cách 2: tự định nghĩa kiểu bool với enum
#include<stdio.h>
typedef enum { false, true } bool;
 
int main() 
{ 
    bool value = false;
    if (value) { // tuong duong v?i ki?m tra value == true
      printf("value is true");  
    } else {
    printf("value is false");
    }
    return 0; 
}

// Cách 3: Định nghĩa kiểu bool với integer
typedef int bool;
enum { false, true };

// Cách 4: Khai báo hằng số true, false
typedef int bool;
#define true 1
#define false 0