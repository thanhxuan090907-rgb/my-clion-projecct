#include <stdio.h>
int main () {
    int so_bi_mat;
    int so_doan;

    printf("Nhap so bi mat cua ban: ");
    scanf ("%d", &so_bi_mat);
    printf("nhap mot so doan cua nguoi dung: ");
    scanf ("%d", &so_doan);

    if (so_doan > so_bi_mat) {
        printf("So cua ban lon hon so bi mat!\n");
    }else if (so_doan < so_bi_mat) {
        printf("So cua ban nho hon so bi mat!\n");
    }else {
        printf("CHUC MUNG BAN DA DOAN DUNG SO: %d\n", so_bi_mat);
    }
    return 0;

}