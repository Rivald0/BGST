/* 
Nama        : Rivaldo Y.G Butarbutar
NIM         : 13322033
Deskripsi   : --
Tanggal     : --

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int i; //varibael untuk inerasi
    int a[10]; //deklarasi array bertipe integer dan terdiri dari 10 elemen

    //set the elements of array to i+10
    for (i = 0; i < 10; i++){
    printf("Masukkan nilai array a[%d] : ", i);
    scanf("%d", &a[i]);
    }

    //printf the elements of array
    for (i = 0; i < 10; i++)
    printf("%d\n", a[i]);

    system("PAUSE");
    return 0;
}