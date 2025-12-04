/*Подвиг 8. Продолжите программу, в которой из консоли считываются целочисленные
значения в два массива с именами a и b, каждый размерностью 3 x 4. Объявите еще
один целочисленный двумерный массив res той же размерности, значения каждого элемента
которого должны быть равны сумме соответствующих элементов массивов a и b,
то есть, по следующей формуле:

res[i][j] = a[i][j] + b[i][j]


Выведите в консоль полученный массив res в виде таблицы целых чисел
из 3 строк и 4 столбцов. В каждой строке числа должны быть записаны
через пробел. В начале и конце строк пробелов быть не должно.*/

#include <stdio.h>

#define ROWS 3
#define COLS 4

void input_arr(int arr[ROWS][COLS]);
void print_arr(int arr[ROWS][COLS]);
void merge_arrs(int arr_1[ROWS][COLS], int arr_2[ROWS][COLS], int res_arr[ROWS][COLS]);

int main(void)
{
    int a[ROWS][COLS] = {0};
    int b[ROWS][COLS] = {0};
    int *ptr_a = &a[0][0];
    int *ptr_b = &b[0][0];

    int x;
    for (int i = 0; i < ROWS * COLS && scanf("%d", &x) == 1; ++i)
        *ptr_a++ = x;
    for (int i = 0; i < ROWS * COLS && scanf("%d", &x) == 1; ++i)
        *ptr_b++ = x;

    input_arr(a);
    input_arr(b);

    int res[ROWS][COLS] = {0};

    merge_arrs(a, b, res);

    print_arr(res);

    return 0;
}

void input_arr(int arr[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void merge_arrs(int arr_1[ROWS][COLS], int arr_2[ROWS][COLS], int res_arr[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            res_arr[i][j] = arr_1[i][j] + arr_2[i][j];
        }
    }
}

void print_arr(int arr[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (j < COLS - 1)
            {
                printf("%d ", arr[i][j]);
            }
            else
            {
                printf("%d", arr[i][j]);
            }
        }
        printf("\n");
    }
}