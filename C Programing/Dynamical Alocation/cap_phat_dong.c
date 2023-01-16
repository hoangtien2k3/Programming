
// cấp phát bộ nhớ động trong c
/*
    + malloc(memory allocation): cấp phát bộ nhớ
    syntax: ptr = (castType*) malloc(size);
    Ex: ptr = (int*) malloc(100 * sizeof(int));


    + calloc(contiguous allocation): cấp phát liên tục
    syntax: ptr = (castType*) calloc(n, size);
    Ex: ptr = (int*) calloc(100, sizeof(int));


    + free(): giải phóng bộ nhớ
    syntax: free(tên con trỏ); // ptr là con trỏ
    Ex: free(ptr);


    + realloc(): nếu việc cấp phát bộ nhớ không đủ hoặc cần nhiều hơn mức đã cấp phát thì
                 bạn có thể sử dụng hàm realloc()
    syntax: ptr = (int*) realloc(ptr, n);
    Ex: ptr = (int*) realloc(ptr, n2 * sizeof(int));


*/

// Sử dụng hàm malloc và calloc, free;
#include<stdio.h>
#include<stdlib.h>

int Sum_Pointer(int n){
    int sum = 0;
    int *ptr = (int*) malloc(n * sizeof(int)); // hàm malloc
    // int *ptr = (int*) calloc(n, sizeof(int)); // hàm calloc

    if (ptr == NULL) {
        printf ("Error!");
        return 0;
    }
    printf ("Enter value allocation contiguous: ");
    for (int i=0; i<n; i++) {
        scanf ("%d", (ptr+i));
        sum += *(ptr+i);
    }  
    free(ptr);
    return sum;
}

int main() {
    int n, sum = 0;
    printf ("Input a integer n = ");
    scanf("%d", &n);
    printf ("Sum = %d", Sum_Pointer(n));
    return 0;
}


///////
/*
// Sử dụng hàm malloc, realloc và free;
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n1, n2, sum = 0;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n1);

    ptr = (int*) malloc(n1 * sizeof(int));

    printf("Dia chi cua vung nho vua cap phat: %u", ptr);
    
    printf("\nNhap lai so luong phan tu: ");
    scanf("%d", &n2);

    // phân bổ lại vùng nhớ
    ptr = (int*) realloc(ptr, n2 * sizeof(int));

    printf("Dia chi cua vung nho duoc cap phat lai: %u", ptr);
    printf ("\nNhap vao phan tu: ");
    for (int i=0; i<n2; i++) {
        scanf ("%d", (ptr + i));
        sum += *(ptr+i);
    }
    printf ("\nSum = %d", sum);
    // giải phóng

    free(ptr);

    return 0;
}

*/