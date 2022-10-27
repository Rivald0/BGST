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
    int i; //variabel unntuk interasi
    int *a; //deklarasi array dinamis bertipe integer
    int sz; //varibael yang menampung ukuran array

    printf("Masukkan Size Array : ");
    scanf("%d", &sz); //membaca ukuran array
    printf("\n");

    a = (int*)malloc(sz * sizeof(int)); //alokasi array secara dinamis
    
    //set the elements of array to i + 10
    
    for(i=0; i<sz; i++){
    printf("Masukkan Nilai Array : ");
    scanf("%d", &a[i]);
    }
    //printf the elements of array 
    printf("\n");
    printf("Nilai Array = ");
    for(i=0; i<sz; i++)
    printf("%d ", a[i]);
    printf("\n");

    system("PAUSE");
    return 0;
}