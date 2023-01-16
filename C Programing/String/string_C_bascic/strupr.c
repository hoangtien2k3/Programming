/*
    The strupr(string) function returns string characters in uppercase. Let's see a simple example of strupr() function.

    C String Uppercase: strupr()

    Chuyển các ký tự dạng chữ thường thành chữ Hoa

    Lowercase(chữ thường) -> Uppercase(chữ Hoa)
*/

// Cách 1: dùng hàm strupr
#include<stdio.h>
#include<string.h>
// Uppercase : chữ Hoa
void Strupr (char s1[]) {
    printf ("Chuoi chu thuong s1 ban dau: %s", s1);
    printf ("\nChuoi chu Hoa: %s", strupr(s1));
}
int main() {
    char s1[20];
    printf ("Nhap vao chuoi s1: ");
    gets(s1);
    Strupr(s1);
    return 0;
}



// Cách 2: không dùng hàm (vì ASCII (a = A + 32))
#include<stdio.h>
#include<string.h> 
char *solution (char s[]) {
    int length = strlen(s);
    for (int i=0; i < strlen(s); i++) {
        if ('a' <= s[i] && s[i] <= 'z'){
            s[i] -= 32;
        }
    }
    return s;
}
int main() {
    char s[20];
    gets(s);
    solution(s);
    puts(s);

}




///////////////////
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// int *getarray(int x) {
//     int *arr = malloc (x * sizeof(int));
//     for (int i = 0; i < x; i++) {
//         arr[i] = x + i + 1;
//     }
//     return arr;
// }

// int main(int argc, int *argv[]) {
//     int x = 7;  
//     int *ptr = getarray(x);
//     for (int i = 0; i < x; i++) {
//         printf ("%d ", ptr[i]);
//     }
//     free(ptr);
//     return 0;
// }
