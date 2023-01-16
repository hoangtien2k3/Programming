
// Nguon: https://laptrinhcanban.com/c/lap-trinh-c-co-ban/kieu-cau-truc-trong-c/lay-kich-thuoc-struct-trong-c/
/* 
    + Data Structure Alignment: Data Structure is the way data is arranged and accessed in computer memory. 
        Có nghĩa là khi data load lên memory sẽ được CPU sắp xếp lại để tiện cho việc truy xuất 
        tối ưu nhất có thể.


    + Data alignment: sắp xếp data sao cho địa chỉ của các biến luôn là số chẵn và phù hợp với hệ thống

    + Data padding: để làm được việc alignment như ở trên chúng ta cần phải “padding” 
        thêm một số byte vào sau biến “char c” để khi đó biến “int i” có thể ở địa chỉ chẵn

    - Kích thước struct trong C là kích thước mà struct đó chiếm trong bộ nhớ máy tính. 
    Kích thước struct trong C được tính bởi đơn vị byte, và kích thước của nó được tính 
    bằng tổng kích thước của tất cả các thành viên trong nó, cộng thêm một bộ nhớ đệm 
    (padding memory) ở giữa các thành viên nhằm tăng tốc độ truy cập của máy tính.


*/


#include <stdio.h>

typedef struct {   
    char name[20];
    char sex;
    int age;
    double height;
    double weight;
} person_t;

int main(void){
    person_t p;

    printf("name=%d, sex=%d, age=%d, height=%d, weight=%d\n",
            sizeof(p.name), sizeof(p.sex), sizeof(p.age), sizeof(p.height), sizeof(p.weight));
    printf("person_t=%d\n", sizeof(p));
}