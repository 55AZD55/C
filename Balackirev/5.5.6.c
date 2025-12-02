/*Подвиг 6. Продолжите программу. Из массива pows необходимо удалить
все элементы кратные 3 (делятся нацело на 3). Если таких элементов нет,
то ничего удалять не нужно. Выведите в консоль по порядку в одну строчку
через пробел полученные значения оставшихся элементов массива pows.*/

#include <stdio.h>

#define TOTAL 20

void print_arr(short *arr, int count);

int main(void)
{
    short pows[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(pows) / sizeof(*pows);

    while (count < sz_ar && scanf("%hd", &pows[count]) == 1)
        count++;

    int count_3 = 0;

    for (int i = 0; i < (int)count; i++)
    {
        if (pows[i] % 3 == 0)
        {
            count_3++;
            for (int j = i; j < (int)count - 1; j++)
            {
                pows[j] = pows[j + 1];
            }
            i--;
            count--;
        }
    }

    print_arr(pows, count);
    return 0;
}

void print_arr(short *arr, int count)
{
    for (int i = 0; i < (int)count; i++)
        printf("%d ", arr[i]);
}