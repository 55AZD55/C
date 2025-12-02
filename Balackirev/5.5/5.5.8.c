/*Подвиг 8. Продолжите программу. Выполните сортировку второй
половины массива ws по убыванию (невозрастанию), используя метод
сортировки выбором. То есть, сортировать нужно элементы с индексами
от count/2 до count-1 включительно. Выведите в консоль все полученные
значения массива ws (первые count элементов) в одну строчку через пробел
с точностью до сотых.*/

#include <stdio.h>

#define TOTAL 20

void print_arr(float *arr, int count);
void sort_arr_2(float *arr, int count);

int main(void)
{
    float ws[TOTAL] = {0.0f};
    size_t count = 0;
    size_t sz_ar = sizeof(ws) / sizeof(*ws);

    while (count < sz_ar && scanf("%f", &ws[count]) == 1)
        count++;

    sort_arr_2(ws, count);

    print_arr(ws, count);

    return 0;
}

void print_arr(float *arr, int count)
{
    for (int i = 0; i < (int)count; i++)
        printf("%.2f ", arr[i]);
}

void sort_arr_2(float *arr, int count)
{
    int count_2 = count / 2;
    for (int i = count_2; i < count - 1; i++)
    {
        int max = i;
        for (int j = i + 1; j < count; j++)
        {
            if (arr[j] > arr[max])
                max = j;
        }
        if (max != i)
        {
            float temp = arr[i];
            arr[i] = arr[max];
            arr[max] = temp;
        }
    }
}