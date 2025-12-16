/*Подвиг 7* (с повторением). Продолжите программу, которая в массив строк ps (двумерный массив 7 x 50)
читает из входного потока фамилии семи сотрудников, записанных в одну строчку через пробел. Считать,
что максимальная длина фамилии не превышает 50 символов. Сформировать еще одну строку ps_sort, в которую
через пробел скопировать фамилии сотрудников по возрастанию их длин. В конце последней фамилии пробела
быть не должно, сразу стоять символ '\0'. Вывести строку ps_sort в консоль.*/

/*
test #1
input: Ivanov Petrova Sidorova Balakirev Bach Stras Lomonosova
output: Bach Stras Ivanov Petrova Sidorova Balakirev Lomonosova

test #2
input: Bah Petrova Uvanov Sidorova Lomonosova Balakirev Stra
output: Bah Stra Uvanov Petrova Sidorova Balakirev Lomonosova
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char ps[7][50];
    char ps_sort[sizeof(ps) + 7] = "";

    for (int i = 0; i < 7; i++)
        scanf("%49s", ps[i]);

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6 - i; j++)
        {
            char temp[50];
            if (strlen(ps[j + 1]) < strlen(ps[j]))
            {
                strcpy(temp, ps[j + 1]);
                strcpy(ps[j + 1], ps[j]);
                strcpy(ps[j], temp);
            }
        }
    }

    for (int i = 0; i < 7; i++)
    {
        strcat(ps_sort, ps[i]);
        if (i < 6)
            strcat(ps_sort, " ");
    }

    ps_sort[sizeof(ps_sort) - 1] = '\0';

    printf("%s", ps_sort);

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
        return 0;
}