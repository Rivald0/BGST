#include <stdio.h>
#include <stdlib.h>

int main()
{

    int **arr1, **arr2;
    int i, j, x, y, **hasil;

    printf("masukan banyak baris: ");
    scanf("%d", &x);

    printf("masukan banyak kolom: ");
    scanf("%d", &y);

    arr1 = (int **)malloc(x * sizeof(int *));
    arr2 = (int **)malloc(x * sizeof(int *));
    hasil = (int **)malloc(x * sizeof(int *));

    printf("masukkan bilangan pertama:\n");
    for (i = 0; i < x; i++)
    {
        arr1[i] = (int *)malloc(y * sizeof(int *));
        arr2[i] = (int *)malloc(y * sizeof(int *));
        hasil[i] = (int *)malloc(y * sizeof(int *));
    }
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            scanf("%d", &arr1[i][j]); 
        }
    }
    printf("masukkan bilangan kedua:\n");
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            
            scanf("%d", &arr2[i][j]); 
        }
    }
    printf("maka penjumlahannya adalah:\n");
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            hasil[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
    system("pause");
    system("cls");
    return 0;
}
