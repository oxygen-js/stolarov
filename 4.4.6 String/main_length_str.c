/* 4.4.6 - Строки */

#include <stdio.h>

/* Вариант 1 */
int str_length(const char *str)
{
    int i;
    for(i = 0; str[i]; i++)
        {}
    return i;
}

/* Вариант 2 */
int str_length_two(const char *str)
{
    const char *p;      // = 0
    p = str;            // p = 97
    while (*p)          // Пока *p (не найдется символ = '\0') делай цикл
        p++;            // к p = 97 делай при каждой итерации + 1
    return p - str;
}

/* Вариант 3 - Лучший от автора */
int str_length_two(const char *str)
{
    const char *p;
    for(p = str; *p; p++)
        {}
    return p - str;
}

int main() 
{   
    int length;
    char str[] = {'a', 'b', '\0', 'c'};
    str_length(str);
    length = str_length_two(str);
    printf("%d \n", length);
    return 0;
}
