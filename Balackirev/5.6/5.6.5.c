/*Подвиг 5. Продолжите программу, которая читает из входного потока 9 целых чисел,
записанных в одну строчку через пробел, и помещает их по порядку в двумерный
целочисленный массив ar_2D размерностью 3 x 3. В тестах гарантируется наличие минимум 9 целых чисел.*/

#include <stdio.h>

#define TOTAL 3

void input_arr(int arr[TOTAL][TOTAL]);

int main(void)
{
    int ar_2D[TOTAL][TOTAL] = {0};

    input_arr(ar_2D);

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
        return 0;
}

void input_arr(int arr[TOTAL][TOTAL])
{
    for (int i = 0; i < TOTAL; i++)
    {
        for (int j = 0; j < TOTAL; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}