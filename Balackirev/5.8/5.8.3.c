/*Подвиг 3. Напишите программу, которая читает из входного потока слова в массив:

char data[5][10];


Всего пять слов записанных через пробел. Чтение должно выполняться с помощью функции
scanf() с учетом максимальной длины хранимого слова (10 символов, включая символ конца строки).
После чтения пяти фрагментов (функция scanf() должна сработать ровно пять раз),
вывести прочитанные данные в консоль в формате:

[строка 1]
[строка 2]
...
[строка 5]

(Прочитанные строки выводятся каждая с новой строки в квадратных скобках.)*/

/*
test #1
input: Moscow Ufa Vladivostok Samara Tver
output:
[Moscow]
[Ufa]
[Vladivost]
[ok]
[Samara]

test #2
input: Ufa Samara Krasnojarsk Belgorod Vladivostok
output:
[Ufa]
[Samara]
[Krasnojar]
[sk]
[Belgorod]
*/

#include <stdio.h>

int main(void)
{
    char data[5][10];

    for (int i = 0; i < 5; i++)
    {
        scanf("%9s", data[i]);
        printf("[%s]\n", data[i]);
    }

    return 0;
}