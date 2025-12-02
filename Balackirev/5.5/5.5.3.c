/*Подвиг 3. Продолжите программу. Необходимо после первого найденного элемента
со значением 5 массива digs вставить новое значение -5. Обратите внимание,
что при вставке нового значения, последний элемент массива digs может теряться
(если длина массива не позволяет хранить все значения). Также следует учитывать,
что элемент со значением 5 может отсутствовать в массиве digs (тогда ничего вставлять не нужно).
Выведите в консоль по порядку значения всех прочитанных + добавленных элементов массива digs
в одну строчку через пробел.*/

#include <stdio.h>

#define TOTAL 10

void print_arr(int *arr, int count);

int main(void)
{
    int digs[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(digs) / sizeof(*digs);

    while (count < sz_ar && scanf("%d", &digs[count]) == 1)
        count++;

    int t_5 = 0;

    for (int i = 0; i < (int)count; i++)
    {
        if (digs[i] == 5)
        {
            t_5 = i;
            break;
        }
    }

        if (t_5)
    {
        count = (count < TOTAL) ? count + 1 : TOTAL;
        for (int i = (int)count; i > t_5; i--)
        {
            digs[i] = digs[i - 1];
        }

        digs[t_5 + 1] = -5;

        print_arr(digs, count);
    }
    else
    {
        print_arr(digs, count);
    }
    return 0;
}

void print_arr(int *arr, int count)
{
    for (int i = 0; i < count; i++)
        printf("%d ", arr[i]);
}