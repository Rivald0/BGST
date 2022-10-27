#include <stdio.h>

int main()
{

    int x_size1 = 2;
    int x_size2 = 2;
    int y_size1 = 2;
    int y_size2 = 2;

    char x_array[x_size1][x_size2];
    char y_array[y_size1][y_size2];

    x_array[0][0] = 9;
    x_array[0][1] = 6;
    x_array[1][0] = 4;
    x_array[1][1] = 3;

    y_array[0][0] = 4;
    y_array[0][1] = 3;
    y_array[1][0] = 5;
    y_array[1][1] = 2;

    int hasil[4];
    hasil[0] = x_array[0][0] + y_array[0][0];
    hasil[1] = x_array[0][1] + y_array[0][1];
    hasil[2] = x_array[1][0] + y_array[1][0];
    hasil[3] = x_array[1][1] + y_array[1][1];

    printf("arr1 = %d + %d = %d\n", x_array[0][0], y_array[0][0], hasil[0]);
    printf("arr2 = %d + %d = %d\n", x_array[0][1], y_array[0][1], hasil[1]);
    printf("arr3 = %d + %d = %d\n", x_array[1][0], y_array[1][0], hasil[2]);
    printf("arr4 = %d + %d = %d\n", x_array[1][1], y_array[1][1], hasil[3]);

    printf("\n");

    
    printf(" %d  %d \n", hasil[0], hasil[1]);
    printf(" %d  %d \n", hasil[2], hasil[3]);

    return 0;
}
