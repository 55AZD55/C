/*Подвиг 7. Продолжите программу. Выполните сортировку массива ws
по возрастанию (неубыванию), используя метод сортировки выбором.
Сортировать нужно только первые count элементов. Выведите в консоль
значения отсортированного массива ws (первые count элементов) в одну
строчку через пробел с точностью до сотых.*/

#include <stdio.h>

#define TOTAL 20

void print_arr(float *arr, int count);
void sort_arr(float *arr, int count);

int main(void)
{
    float ws[TOTAL] = {0.0f};
    size_t count = 0;
    size_t sz_ar = sizeof(ws) / sizeof(*ws);

    while (count < sz_ar && scanf("%f", &ws[count]) == 1)
        count++;

    sort_arr(ws, count);

    print_arr(ws, count);

    return 0;
}

void print_arr(float *arr, int count)
{
    for (int i = 0; i < (int)count; i++)
        printf("%.2f ", arr[i]);
}

void sort_arr(float *arr, int count)
{
    for (int i = 0; i < (int)count - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < (int)count; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i)
        {
            float temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}