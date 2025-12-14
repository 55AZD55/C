/*Подвиг 2. Напишите программу, которая в массив строк cities читает
из входного потока названия шести городов, записанных в одну строчку
через пробел. Максимальная длина названия города не превышает 50 символов.
Из всех названий выбрать наибольшее по длине и вывести в консоль.*/

/*
test #1
input: Tver Moskwa Ulianovsk Barnaul Ufa Belgorod
output: Ulianovsk

test #2
input: Voronezsh Piter Kazan Astachan Orenburg Orel
output: Voronezsh
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char cities[6][51];
    int max_len_index = 0;
    int max_len = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%50s", cities[i]);
        size_t len = strlen(cities[i]);

        if (max_len < len)
            max_len = len, max_len_index = i;
    }

    printf("%s", cities[max_len_index]);

    return 0;
}
