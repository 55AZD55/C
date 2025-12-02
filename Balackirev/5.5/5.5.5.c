/*Подвиг 5. Продолжите программу. Из массива pows необходимо удалить элемент
с первым найденным четным значением. Если такой элемент не был найден,
то, соответственно, ничего удалять не нужно. Выведите в консоль по порядку
в одну строчку через пробел полученные значения оставшихся элементов массива pows.*/

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

    int place = -1;

    count = (count < TOTAL) ? count : TOTAL;

    for (int i = 0; i < (int)count; i++)
    {
        if (pows[i] % 2 == 0)
        {
            place = i;

            for (int j = place; j < (int)count - 1; j++)
            {
                pows[j] = pows[j + 1];
            }

            print_arr(pows, count - 1);

            break;
        }
    }

    if (place == -1)
        print_arr(pows, count);

    return 0;
}

void print_arr(short *arr, int count)
{
    for (int i = 0; i < count; i++)
        printf("%d ", arr[i]);
}