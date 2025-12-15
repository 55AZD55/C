/*Подвиг 3. Напишите программу, которая в массив строк cities читает из
входного потока названия шести городов, записанных в одну строчку через пробел.
Максимальная длина названия города не превышает 50 символов. Из всех названий
выбрать два наибольших по длине и вывести в консоль в одну строчку через
пробел в порядке их следования.*/

/*
test #1
input: Tver Moskwa Ulianovsk Barnaul Ufa Belgorod
output: Ulianovsk Belgorod

test #2
input: Voronezsh Piter Kazan Astachan Orenburg Orel
output: Voronezsh Astachan

test #3
input: Ufa Baltimor Kazan Vladivostok Tver Orel
output: Baltimor Vladivostok
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char cities[6][51];
    int max_len_index_1 = 0;
    int max_len_index_2 = 0;
    int max_len_1 = 0;
    int max_len_2 = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%50s", cities[i]);
        int len = strlen(cities[i]);
        if (max_len_1 < len)
        {
            max_len_1 = len, max_len_index_1 = i;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        int len = strlen(cities[i]);
        if (max_len_2 < len && len < max_len_1)
        {
            max_len_2 = len, max_len_index_2 = i;
        }
    }

    (max_len_index_1 < max_len_index_2) ? printf("%s %s", cities[max_len_index_1], cities[max_len_index_2]) : printf("%s %s", cities[max_len_index_2], cities[max_len_index_1]);

    return 0;
}