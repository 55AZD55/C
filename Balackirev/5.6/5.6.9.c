/*Подвиг 9* (классический). Напишите программу в которой на двумерное
игровое поле размерностью 10 x 10 случайным образом размещаются 12 "мин" так,
чтобы они не соприкасались друг с другом (вокруг клетки с миной не должно
быть других мин). Игровое поле должно быть представлено двумерным массивом
с именем pg, типом char и размерностью 10 х 10. Пустые клетки (без мин)
должны принимать значение 0, а клетки с минами помечаются символом '*'.

P. S. В консоль ничего выводить не нужно.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define MINES 12

int count_neighbors(char arr[SIZE][SIZE], int i, int j);

int main(void)
{
    char pg[SIZE][SIZE] = {0};

    srand(time(NULL));

    int c = MINES;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            pg[i][j] = '0';
        }
    }

    while (c > 0)
    {
        int i = rand() % SIZE;
        int j = rand() % SIZE;

        if (pg[i][j] != '*' && count_neighbors(pg, i, j) == 0)
        {
            pg[i][j] = '*';
            c--;
        }
    }

    __assert_verify_pg(pg); // для тестирования (не убирать и должна идти непосредственно перед return 0)
    return 0;
}

int count_neighbors(char arr[SIZE][SIZE], int i, int j)
{
    int count = 0;

    for (int di = -1; di <= 1; di++)
    {
        for (int dj = -1; dj <= 1; dj++)
        {
            if (dj == 0 && di == 0)
                continue;

            int x = (j + dj + SIZE) % SIZE;
            int y = (i + di + SIZE) % SIZE;

            if (arr[y][x] == '*')
                count++;
        }
    }

    return count;
}