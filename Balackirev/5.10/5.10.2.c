/*Подвиг 2. Продолжите программу. В строке str необходимо найти последний символ '\n'
и если он найден, то заменить на символ '\0'. Вывести в консоль полученную строку str в квадратных скобках.*/

/*
test #1
input: Языки Си. Строки
output: [Языки Си. Строки]

test #2
input: Я люблю По
output: [Я люблю По]

test #3
input: I love C
output: [I love C]
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str) - 1, stdin);

    char *ptr = strrchr(str, '\n');
    if (ptr != NULL)
        *ptr = '\0';

    printf("[%s]", str);

    return 0;
}