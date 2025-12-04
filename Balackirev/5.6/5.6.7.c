/*Подвиг 7. В программе ниже выполняется считывание целочисленных значений из входного потока
с их последовательной записью в массив vls размерностью 3 x 5 (3 строки и 5 столбцов).
Необходимо объявить еще один массив с именем mean типа double и размерностью 3 элемента.
В элементы массива mean следует записать среднее арифметическое каждой строки массива vls.
Выведите в консоль значения элементов массива mean (по порядку) в одну строчку через пробел с точностью до сотых.*/

#include <stdio.h>

#define ROWS 3
#define COLS 5

void input_arr(short arr[ROWS][COLS]);
void print_arr_h(double arr[ROWS]);

int main(void)
{
    short vls[ROWS][COLS] = {0};
    short *ptr_vls = &vls[0][0];

    short x;
    for (int i = 0; i < ROWS * COLS && scanf("%hd", &x) == 1; ++i)
        *ptr_vls++ = x;

    input_arr(vls);

    double mean[ROWS] = {0.0};

    for (int i = 0; i < ROWS; i++)
    {
        double r_r = 0.0;
        for (int j = 0; j < COLS; j++)
        {
            r_r += vls[i][j];
        }
        mean[i] = r_r / COLS;
    }

    print_arr_h(mean);

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
        return 0;
}

void input_arr(short arr[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            scanf("%hd", &arr[i][j]);
        }
    }
}

void print_arr_h(double arr[ROWS])
{
    for (int i = 0; i < 3; i++)
        printf("%.2lf ", arr[i]);
}