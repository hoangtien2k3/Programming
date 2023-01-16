
/* Syntax: struct and pointer

    struct name {
        member1;
        member2;
        .
        .
    };
    int main() {
        struct name *ptr, Harry;
    }

*/

// #include<stdio.h>
// #include<stdlib.h>

// struct person {
//     int age;
//     float weight;
// } person1;

// int main() {
//     // struct person *ptr, person1;
//     struct person *ptr;
//     ptr = &person1;
//     printf ("Nhap vao tuoi: ");
//     scanf ("%d", &ptr->age);
//     printf ("Nhap vao weight: ");
//     scanf ("%f", &ptr->weight);
//     printf ("\nTHONG TIN PERSON: ");
//     printf ("\nage: %d", ptr->age);
//     printf ("\nage: %.2f", (*ptr).weight);

//     //! ptr->weight == (*ptr).weight;
//     //! (*ptr).age == ptr->age;

//     return 0;
// }

//! //////////////
// CẤP PHÁT BỘ NHỚ ĐỘNG TRONG CẤP C
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct person {
    int age;
    float weight;
    char name[30];
};

struct person *capPhatDong(int n) {
    
    // struct person *pa = {n, n > 0 ? (struct person*) malloc(n * sizeof(struct person)) : NULL};

    struct person *pa = (struct person*) malloc(n * sizeof(struct person));

    return pa;
}

void NhapThongTin(int n) {
    
    //! Cấp phát động cách 1: dùng fuction riêng
    struct person *ptr = capPhatDong(n);

    //! Cách 2: cấp phát động gọi trực tiếp hàm
    // struct person *ptr;
    // ptr = (struct person*) malloc(n * sizeof(struct person));

    for (int i=0; i<n; i++) {
        printf ("Nhap vao ten, tuoi va can nang person %d: ", i);
        scanf ("%s %d %f", (ptr+i)->name, &(ptr+i)->age, &(ptr+i)->weight);
    }
    
    printf ("\nTHONG TIN: ");
    for (int i=0; i<n; i++)  {
        printf ("\nName: %s\t Age: %d\t Weight: %.2f", (ptr+i)->name, (ptr+i)->age, (ptr+i)->weight);
    }
    free(ptr);
}


int main() {
    int n; 
    printf ("Nhap so luong person: n = ");
    scanf ("%d", &n);

    NhapThongTin(n);
    return 0;
}






