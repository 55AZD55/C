/*Подвиг 4. Напишите программу, которая читает из входного потока в массив data
названия шести городов, записанных в одну строчку через пробел. Считать,
что максимальная длина названия города не превышает 20 символов. Вывести в
консоль прочитанные города в обратном порядке в одну строчку через пробел.*/

/*
test #1
input: Kazan Ufa Vladivostok Tver Moskva Samara
output: Samara Moskva Tver Vladivostok Ufa Kazan

test #2
input: Brjansk Belgorod Astrahan Cheljabinsk Barnaul Urengoy
output: Urengoy Barnaul Cheljabinsk Astrahan Belgorod Brjansk
*/

#include <stdio.h>

int main(void)
{
    char data[6][20];

    for (int i = 0; i < 6; i++)
    {
        scanf("%s", data[i]);
    }

    for (int i = 5; i >= 0; i--)
    {
        printf("%s ", data[i]);
    }

    return 0;
}