/*Подвиг 2. Продолжите программу. Необходимо в массиве buffer поменять местами
первую половину прочитанных данных со второй половиной. Обратите внимание,
что число прочитанных данных определяется переменной count. Причем, если count четное,
то первая половина меняется со второй целиком, а если count нечетное, то центральный
элемент должен оставаться на своем месте без изменений. Выведите в консоль
в одну строчку через пробел первые count элементов полученного массива buffer.

P. S. Дополнительных массивов в программе не создавать.*/

#include <stdio.h>

#define SIZE_BUFFER 128

int main(void)
{
    int buffer[SIZE_BUFFER];
    size_t count = 0;
    size_t sz_ar = sizeof(buffer) / sizeof(*buffer);

    while (count < sz_ar && scanf("%d", &buffer[count]) == 1)
        count++;

    if (count % 2 == 0)
    {
        for (int i = 0; i < (int)count / 2; i++)
        {
            int a = buffer[i];
            int b = buffer[count / 2 + i];
            *(buffer + (count / 2 + i)) = a;
            buffer[i] = b;
        }
    }
    else
    {
        for (int i = 0; i < (int)count / 2; i++)
        {
            int a = buffer[i];
            int b = buffer[(count + 1) / 2 + i];
            *(buffer + ((count + 1) / 2 + i)) = a;
            buffer[i] = b;
        }
    }

    for (unsigned int i = 0; i < count; i++)
    {
        printf("%hd ", buffer[i]);
    }

    return 0;
}