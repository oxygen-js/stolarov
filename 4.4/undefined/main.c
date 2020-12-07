#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
// 4.4.2
    /*
        int q; 
        int *p;
        int m[20];  // Массив из 20 элементов // m - адррес первого элемента массива
        p = m;
        p = m + 13; // или p = &m[13]
        q = p - m;
        printf("%d", q);
    */

// 4.4.3
    double *k;
    //void *malloc(int size);

    k = malloc(360*sizeof(double));

    for(int i = 0; i < 360; i++)
    {
        k[i] = sin((2 * M_PI/360.0) * (double)i);
       // printf("%f \n", k[i]);
    }

    //free(k); // освобождает выделенную область памяти. Функция принимает в качестве параметра адрес, ранее возвращенной функцией malloc
    printf("%ld", sizeof(k));
    return 0; 
}
 