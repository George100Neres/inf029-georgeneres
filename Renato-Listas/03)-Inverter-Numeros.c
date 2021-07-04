
#include<stdio.h>
#include<stdlib.h>

/* Faça uma função recursiva que permita inverter um número inteiro N. Ex: 123 - 321*/

int num;
int temp;

int inverso(int n)
{
    if(n == 0)
    return n;
    else 
    {
        printf("%d", n % 10);
        n = n / 10;
        return inverso(n);
    }
    return 0;
 }
 int main()
  {
      printf("Digite algum numero:");
      scanf("%d", &num);
      inverso(num);
      return 0;
  }