
/*
    ! Khai báo mảng struct thì có 2 cách: 
        + khai báo mảng struct tĩnh
        + Khai báo mảng struct động




*/

// Array_In_Struct : quản lý một cách đơn giản và dễ dàng

#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

// bài toán cần lưu thông tin 3 sinh viên:
struct student 
{
    int tuoi;
    char name[30];
};

/*  cấp phát và gán luôn array struct tỉnh có 3 phần tử: hocsinh[3]; 
struct student
{
    int tuoi;
    char name[30];
} hocsinh[3];
*/ 




int main() {

    // struct student hocsinh[3]; //! khai báo mảng tỉnh kiểu struct

    struct student *hocsinh = (struct student*) malloc(3 * sizeof(struct student)); //Cấp phát động array struct



    for(int i=0; i<3; i++) {
        printf("\nNhap vao tuoi hoc sinh thu %d: ", i+1);
        scanf("%d", &(hocsinh + i)->tuoi);
        printf("Nhap vao name hoc sinh thu %d: ", i+1);
        fflush(stdin);
        gets((hocsinh + i)->name);
    }

    printf("\nDanh sach:_________________________ OKE");
    for (int i=0; i<3; i++) {
        printf("\nTuoi hoc sinh thu %d: %d ", i+1, (hocsinh + i)->tuoi);
        printf("\tName cua hoc sinh thu %d: %s", i+1, (hocsinh + i)->name);
    }






}