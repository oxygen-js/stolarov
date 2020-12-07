/* 4.2.3 Квадратное уравнение */
#include <stdio.h>
#include <math.h>

double discrim(double a, double b, double c) 
{
    return b*b - 4*a*c;
}

int main() 
{
    double p, q, r, d;
    int n;
    n = scanf("%lf %lf %lf", &p, &q, &r); 
    /* прочитать с клавиатуры ввод чисел и записать эти числа в области памяти по адрему &p &q, &r (адреса области памяти походу формируются ОС ??? Но явно мы не вычисляем адреса в ОЗУ) */

    /* функция scanf возвращает значение в данном случае число = 3 , т.к. мы вводим три раза число и записываем их в область памяти по адресу, если пришло не 3, то выдаём ошибку */
    if (n != 3) 
    {
        printf("Error: wrong input \n");
        return 1;
    }
    if (p == 0)
    {
        printf("Error: Not a quadratic equation! \n");
        return 2;
    }
    d = discrim(p,q,r);
    if (d < 0)
    {
        printf("No roots\n");
        return 3;
    }
    d = sqrt(d);
    printf("%.2f %.2f\n", (-q-d)/(2*p), (-q+d)/(2*p));
    return 0;
}
