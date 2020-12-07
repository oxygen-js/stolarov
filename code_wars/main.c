#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool valid_spacing(const char *str_in) 
{
    const char *s;

    for (s = str_in; *s; s++)
        {}
    int len = s - str_in;

    for (int i = 0; i < len; i++)
    {
        if(str_in[i] >= 65) continue;
        if((i == 0 || i == len) && str_in[i] == 32) return false;
        if(str_in[i] != 32 && str_in[i+1] >= 65) return false;    
    }
    return true;
}

int main ()
{
    valid_spacing("Hello world");
    return 0;
}
