// 4.4.4 Модификатор const

#include <stdio.h>

void suspicious_func(int *a) {
    // Функция собирается что то делать с областью памяти на которое указывает "а"
}

void trustworthy_func(const int *a)
{
    // Функция ничего не собирается делать с областью памяти
}


int main ()
{
    const int *p; // Указатель на "константную область памяти"

    
    return 0; 
}
 