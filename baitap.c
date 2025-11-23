#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int so_bi_mat;
    int so_doan = 0;
    int so_lan_doan = 0;
    srand (time (0));
    so_bi_mat = rand() % 100 + 1;

    printf ("----- TRO CHOI DOAN SO (1 den 100) -----\n");
    printf ("Hay doan so bi mat!\n");

    while (so_doan != so_bi_mat) {
        printf ("Nhap so ban doan: ");
        scanf ("%d", &so_doan);
        so_lan_doan++;

        if (so_doan > so_bi_mat) {
            printf("So cua ban lon hon so bi mat! Xin vui  long thu lai.");
        }else if (so_doan < so_bi_mat) {
            printf ("So cua ban nho hon so bi mat! Vui long thu lai.");
        }else {
            printf ("XIN CHUC MUNG! Ban da doan dung so %d\n", so_bi_mat);
            printf ("Ban da mat %d lan doan de chien thang.\n", so_lan_doan);

        }
        return 0;

    }


}
