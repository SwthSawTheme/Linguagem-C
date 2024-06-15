#include <stdio.h>
#include <time.h>

int main(void){

    clock_t start, end;
    double cpu_time_used;

    int num = 0;

    printf("Digite um valor para saber se é Par ou Impar\n");
    scanf("%d",&num);

    start = clock();

    if (num % 2 == 0){
        printf("Par");
    } else{
        printf("Impar");
    }
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("\nTempo de execução: %f segundos\n", cpu_time_used);

    return 0;
}