/*Подвиг 4. Продолжите программу, которая читает из входного потока строку целиком
с помощью функции fgets() в массив str. На выходе формируется корректная Си строка.
Добавьте к строке res_str строку str. При объединении строк необходимо контролировать
выход за пределы массива res_str. То есть, из строки str можно максимум скопировать
до 99-го индекса строки res_str. В конце строки res_str обязательно должен стоять
символ '\0'. Выведите полученную строку res_str в консоль.*/

/*
test #1
input: because it is very fast!
output: I love language C because it is very fast!

test #2
input: because it is very very very very very very very very very very very very very very very very very very very very very very very fast!
output: I love language C because it is very very very very very very very very very very very very very ve

test #3
input: gfhfghfhgfjghjghj ghjghbnjghl.
output: I love language C gfhfghfhgfjghjghj ghjghbnjghl.

test #4
input: .
output: I love language C .
*/

#include <stdio.h>
#include <string.h>

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
    char str[100], res_str[100] = "I love language C ";
    fgets(str, sizeof(str), stdin);
    strip_string(str, sizeof(str));

    strncat(res_str, str, 99 - strlen(res_str));
    res_str[sizeof(res_str) - 1] = '\0';

    printf("%s", res_str);

    return 0;
}