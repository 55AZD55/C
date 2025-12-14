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

int main(void) {
    char cities[6][51];
    int max_len_index_1 = 0;
    int max_len_index_2 = 0;
    int max_len_1 = 0;
    int max_len_2 = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%50s", cities[i]);
        size_t len = strlen(cities[i]);

        if (max_len_1 <= len) {
            max_len_index_2 = max_len_index_1;
            max_len_1 = len, max_len_index_1 = i;            
        }

        
    }

    printf("%s ", cities[max_len_index_1]);
    printf("%s", cities[max_len_index_2]);

    return 0;
}