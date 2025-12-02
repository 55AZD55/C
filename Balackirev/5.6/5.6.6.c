/*Подвиг 6. Продолжите программу, которая читает из входного потока 12
целых чисел, записанных в одну строчку через пробел, и помещает их по
порядку в двумерный массив ar_2D размерностью 4 x 3 (4 - строки; 3 - столбцы).
Выведите в консоль в одну строчку через пробел целочисленные значения
массива ar_2D по столбцам (сначала числа первого столбца, затем - второго
и так до последнего). Пробелов в конце строк быть не должно.*/

#include <stdio.h>

#define ROW 4
#define COL 3

void input_arr(int arr[ROW][COL]);
void print_arr(int arr[ROW][COL]);

int main(void)
{
    int ar_2D[ROW][COL] = {0};

    input_arr(ar_2D);
    print_arr(ar_2D);

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

void input_arr(int arr[ROW][COL])
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void print_arr(int arr[ROW][COL])
{
    for (int i = 0; i < COL; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            if (j < ROW - 1)
            {
                printf("%d ", arr[j][i]);
            }
            else
            {
                printf("%d", arr[j][i]);
            }
        }
        printf("\n");
    }
}