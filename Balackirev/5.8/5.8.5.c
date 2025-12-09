/*Подвиг 5. Напишите программу, которая читает из входного потока в массив data
названия шести стран, записанных в одну строчку через пробел. Считать, что
максимальная длина названия страны не превышает 30 символов. Вывести в консоль страны,
начинающиеся на букву 'G', в одну строчку через пробел в том же порядке,
что и во входном потоке. Если таких стран нет, то ничего выводить не нужно.*/

/*
test #1
input: Madagascar Germany Greece France Guinea Italy
output: Germany Greece Guinea

test #2
input: Indonesia Kazakhstan Russia Korea Jordan Netherlands
output:

test #3
input: Indonesia Kazakhstan Russia Georgia Jordan Netherlands
output: Georgia
*/

#include <stdio.h>

int main(void)
{
    char data[6][30];

    for (int i = 0; i < 6; i++)
    {
        scanf("%s", data[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        if (data[i][0] == 'G')
            printf("%s ", data[i]);
    }

    return 0;
}