#include <stdio.h>

int soma(int a, int b){

    return a + b;
}

int le_int(void){

    int a = 0;
    scanf("%d", &a);
    return a;
}

int main(void){

    puts("Digite os números que deseja somar");

    int n1 = le_int();
    int n2 = le_int();

    printf("A soma de %d + %d = %d", n1, n2, soma(n1,n2));
}