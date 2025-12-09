/*Подвиг 6. Продолжите программу, которая читает из входного потока строку целиком
с помощью функции fgets(). На выходе формируется корректная Си строка.
Удалите из прочитанной строки все латинские символы 'e' и выведите в консоль полученную строку.*/

/*
test #1
input: c_lokalnye-i-globalnye-peremennye
output: c_lokalny-i-globalny-prmnny

test #2
input: ec_vvod-vyvod-strok-v-standartnyee-potokie
output: c_vvod-vyvod-strok-v-standartny-potoki

test #3
input: c_stroki-sposoby-obyavlniya
output: c_stroki-sposoby-obyavlniya
*/

#include <stdio.h>

void strip_string(char *str, int max_len)
{
    int count = 0;
    while (*str++ != '\0' && count++ < max_len)
        ;

    if (count > 1)
    {
        str -= 2;
        if (*str == '\n')
            *str = '\0';
    }
}

int main(void)
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    strip_string(str, sizeof(str));

    int p = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != 'e')
        {
            str[p] = str[i];
            p++;
        }
    }
    str[p] = '\0';

    printf("%s", str);

    return 0;
}