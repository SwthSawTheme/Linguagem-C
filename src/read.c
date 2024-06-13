#include <stdio.h>

int num(int a, int b){
    return a + b;
}

int main (void){

    int n1 = 22;
    int n2 = 33;

    puts("Soma de dois numeros\n");
    printf("A soma de %d + %d = %d\n", n1, n2, num(n1,n1));
}