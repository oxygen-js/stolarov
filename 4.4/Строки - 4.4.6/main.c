#include <stdio.h>

/* 0 вариант*/
int str_length(const char *str)
{
  int i;
  i = 0;
  while (str[i])
    i++;
  return i;
}


/* 1 вариант
int string_length(const char *str)
{
  int i;
  for(i = 0; str[i]; i++)
    {}
  return i;
  printf("%s - %d - %d - %s\n", str, str[1], *str, &str[1]); 
}*/

/* 2 вариант от Автора*/
int string_length(const char *str)
{
  const char *p;
  for(p = str; *p; p++)
  {
    printf("%s - %d - %ld\n", p, *p, p - str);
  }
  return p - str;
}

int main() 
{
  char a[] = {'a', 'b', 'c'};
  string_length(a);
}