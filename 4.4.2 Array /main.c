/* 4.4.2 - Массивы */
#include <stdio.h>

int main()
{
  int m[20];
  int *p; 
  p = m;  /* Присвоить адрес m указателю p */ 
          /* Теперь к элементам "m" можно обращаться через указатьль "р" - р[20]*/
  /* К первому элементу массива можно обратить через m[0] или *m */
  /*
    Обратиться к следующему элементу массива можно через прибвлении +1 к адресу.
    При чем если char * - занимает 1 byte, то при добавлении +1 char * прибавится на +1, 
    а если int * + 1, то к адресу int * прибавится +4, т.к. тип int занимает 4 byte 
    ----
    Иначе говоря m - это адрес первого элемента массива, а m + 1 - адрес второго элемента массива.
    Но коль скоро это адреса (m = адрес 1 элемента), то их мы можем "разыменовать" *(m) = 3, *(m + 1) = 4 и т.д. =тоже самое=> m[0], m[1], m[2] 
  */
  return 0;
}