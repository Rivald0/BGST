/* 
Nama        : Rivaldo Y.G Butarbutar
NIM         : 13322033
Deskripsi   : --
Tanggal     : --

*/
#include  <stdio.h>
#include <stdlib.h>

int main(){
    int arr_i[3];
    int arr_j[3];
    int hasil[3];
    int total;

    for (int i = 0; i < 3; i++)
    {
        printf("Masukkan arr_i[%d]", i); scanf("%d", &arr_i[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Masukkan arr_j[%d]", i); scanf("%d", &arr_j[i]);
    }
    printf("\n");
    hasil[0] = arr_i[0] * arr_j[0];
    hasil[1] = arr_i[1] * arr_j[1];
    hasil[2] = arr_i[2] * arr_j[2];

    total = hasil[0] + hasil[1] + hasil[2];

    printf("Total = %d\n", total);

    system("PAUSE");
    system("CLS");
    return 0;
}