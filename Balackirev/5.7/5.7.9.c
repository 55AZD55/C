/*Подвиг 9. Продолжите программу, в которой объявляется строка с именем str
и максимальной длиной 50 символов (включая символ конца строки).
Инициализируйте str строкой:

Best   language  "C"

(Обратите внимание на несколько подряд идущих пробелов, они должны все присутствовать в строке.)
Затем, все группы подряд идущих символов пробелов заменить на символ переноса строки.
(Каждая группа пробелов заменяется одним символом переноса строки.)

P. S. В консоль ничего выводить не нужно.*/

#include <stdio.h>

int len_string(char *string);

int main(void)
{
    char str[50] = "Best   language  \"C\"";

    int len_s = len_string(str);

    short flag = 0;

    for (int i = 0; i < len_s; i++)
    {
        if (str[i] == ' ' && flag == 0)
        {
            str[i] = '\n';
            flag = 1;
        }
        else if (str[i] == ' ' && flag == 1)
        {
            int temp_i = 0;
            while (str[i + temp_i] == ' ')
            {
                temp_i++;
            }

            for (int j = i; j < len_s - temp_i; j++)
                str[j] = str[j + temp_i];
            len_s = len_s - temp_i;
            str[len_s] = '\0';
        }
        else
        {
            flag = 0;
        }
    }

    for (int i = 0; i < len_s; i++)
        printf("__sim - %c__\n", str[i]);
    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

int len_string(char *string)
{
    int res = 0;
    while (string[res] != '\0')
    {
        res++;
    }
    return res;
}
