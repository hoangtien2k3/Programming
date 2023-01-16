/*
    C String Lowercase (chữ thường): strlwr()
    The strlwr(string) function returns string characters in lowercase. Let's see a simple example of strlwr() function.

    Đổi chuỗi ký tự Hoa thành chuỗi ký tự thường

    Uppercase(chữ Hoa) -> Lowercase(chữ thường)
*/
//  Cách 1: dùng hàm "strlwr()" (Lowercase)
#include<stdio.h>
#include<string.h>
void Strlwr (char s1[]) {
    printf ("Chuoi ban s1 ban dau: %s", s1);
    strlwr (s1);
    printf ("\nChuoi chu Hoa: %s", strlwr(s1));
}
int main() {
    char s1[20];
    printf ("Nhap vao chuoi s1: ");
    gets(s1);
    Strlwr(s1);
    return 0;
}



// Cách 2: không dùng hàm (vì ASCII (a = A + 32))
#include<stdio.h>
#include<string.h> 
char *solution (char s[]) {
    int length = strlen(s);
    for (int i=0; i < strlen(s); i++) {
        if ('A' <= s[i] && s[i] <= 'Z'){
            s[i] += 32;
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


