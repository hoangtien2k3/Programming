
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<time.h>

typedef struct {
    int tuso;
    int mauso;
} PhanSo;

PhanSo* capPhatPhanSo() {
    //! C1
    // return (PhanSo*) malloc(sizeof(PhanSo)); 

    //! C2
    PhanSo* pa = (PhanSo*) malloc(sizeof(PhanSo)); // xin phất phát 1 vùng nhớ với 4 byte
    return pa; // return pa[0];
}

int main() {

    PhanSo* ps = capPhatPhanSo();
    printf ("Nhap tuso, mauso:  ");
    scanf ("%d%d", &ps->tuso, &ps->mauso);
    printf ("%d/%d", ps->tuso, ps->mauso);

}





