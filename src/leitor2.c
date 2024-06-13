#include <stdio.h>
#include <stdbool.h>

int soma(int a, int b){

    return a + b;
}

int le_int(char mensagem[]){

    int a = 0;

    do
    {
        puts(mensagem);
        if (scanf("%d", &a) != 0){
            return a;
        }
        puts("Erro, redigite o número!");

        int lido = 0;

        do{

            lido = getchar();

        }while (lido != '\n' && lido != EOF);

    } while (true);
    
}

int main(void){

    puts("Soma de números inteiros!");

    int n1 = le_int("Primeiro número:");
    int n2 = le_int("Segundo número:");

    printf("O resultado entre %d + %d = %d", n1, n2, soma(n1,n2));
}