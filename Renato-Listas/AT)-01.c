
#include<stdio.h>
#include<stdlib.h>
/*
0! = 1;
N! = N * (N-1)!; 
 */
int fatorial (int N) {

    if(N == 0)
    return 1;
     else
     return N * fatorial(N-1);
}

 int main() {
     system("pause");
     return 0;
 }