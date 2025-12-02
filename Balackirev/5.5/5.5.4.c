/*Подвиг 4. Продолжите программу. Необходимо после каждого элемента
со значением 5 массива digs вставлять новые элементы со значениями:
-1 - после первой найденной пятерки; -2 - после второй пятерки и т.д.
Обратите внимание, что при вставке новых значений, последние элементы
массива digs могут теряться. Также следует учитывать, что элемент со
значением 5 может отсутствовать в массиве digs (тогда ничего вставлять
не нужно). Выведите в консоль по порядку значения всех прочитанных +
добавленных элементов массива digs в одну строчку через пробел.*/

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
    int count_5 = -1;

    for (int i = 0; i < TOTAL; i++)
    {
        if (digs[i] == 5)
        {
            t_5 = i;

            for (int j = TOTAL - 1; j > t_5; j--)
            {
                digs[j] = digs[j - 1];
            }

            digs[t_5 + 1] = count_5;
            i++;
            count_5--;
        }
    }

    if (count_5 != -1)
    {
        count = (count_5 + 1) * -1 + count;
        count = (count < TOTAL) ? count : TOTAL;

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