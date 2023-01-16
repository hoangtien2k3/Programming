
#include<iostream>
#include<stdlib.h>

struct Con_nguoi {
    Con_nguoi (int t, float v1, float cc) {
        tuoi = t;
        vong_mot = v1;
        chieu_cao = cc;
    }
    int tuoi;
    float vong_mot;
    float chieu_cao;
};


int main() {
    Con_nguoi thao(22, 95, 1.65);
    Con_nguoi lan(18, 90, 1.70);
    Con_nguoi huong(29, 85, 1.6);

    Con_nguoi *bo_nhi = nullptr;

    bo_nhi = &thao; 
    thao.tuoi = 23;
    std::cout << (*bo_nhi).tuoi << std::endl;

    bo_nhi = &lan;
    // bo_nhi = bo_nhi + 1;
    std::cout << (*bo_nhi).vong_mot << std::endl;


    bo_nhi = &huong;
    std::cout << bo_nhi->chieu_cao << std::endl;

    return 0;
}