/*Подвиг 8. Продолжите программу, которая читает из входного потока строку целиком
с помощью функции fgets(). На выходе формируется корректная Си строка. Выделите из
строки второе слово (слова разделяются одним или несколькими пробелами) и выведите
его в консоль. Пробелов до и после выделенного слова быть не должно. Если строка
состоит из одного слова, то в консоль вывести "no".

P. S. Пробелы могут быть в начале и в конце строки.*/

/*
test #1
input: "The  best language is C"
output: best

test #2
input: "  I  "
output: no

test #3
input: "y"
output: no

test #4
input: "a b"
output: b

test #5
input: " c   d   r f  "
output: d

test #6
input: "It's my life"
output: my
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

    int count = 0;
    int flag = 0;
    char *word_start = NULL;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            if (!flag)
            {
                flag = 1;
                count++;

                if (count == 2)
                    word_start = &str[i];
            }
        }
        else
        {
            flag = 0;

            if (count == 2 && word_start != NULL)
            {
                for (char *p = word_start; p < &str[i]; p++)
                {
                    printf("%c", *p);
                }
                return 0;
            }
        }
    }

    if (count == 2 && word_start != NULL)
    {
        for (char *p = word_start; str[p - str] != '\0'; p++)
        {
            printf("%c", *p);
        }
        return 0;
    }

    printf("no");

    return 0;
}