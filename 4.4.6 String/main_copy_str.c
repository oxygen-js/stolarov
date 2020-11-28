/* 4.4.6 - Строки */

#include <stdio.h>

/* Вариант - 1 */
void copy_str(char *dest, const char *src)
{
  int i;
  for(i = 0; src[i];i++)
    dest[i] = src[i];
  dest[i] = 0;
}

/* Вариант - 2 */
void copy_str_two(char *dest, const char *src)
{
  while (*src)        // Пока мы не найдем символ = 0
  {
    *dest = *src;     // dest[i] <= src[i] ('' <= 'b');
    dest++;           // dest++ (152 + 1) - перейти к следующему элементу
    src++;            // src++ (97 + 1) - перейти к следующему элементу
  }
  *dest = 0;          // последний результат адреса d = 200 (к примеру) и к dest[200] = 0
}

/*Вариант 3 - Лучше даже так*/
void str_copy_three(char *dest, const char *src)
{
  for (; *src; dest++, src)
    *dest = *src;
  *dest = 0;
}

int main() 
{   
    char *s;
    s = malloc(255);
    char str[] = {'a', 'b', '\0', 'c'};
    copy_str(s, str);
    return 0;
}
