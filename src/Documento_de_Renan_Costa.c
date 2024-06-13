#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Desenvolvido por Renan
//v1.0

//gera a jogada do computador
int gerarJogadaComputador() {
    return rand() % 3;
}

//exibe o resultado da partida
void exibirResultado(int jogadaJogador, int jogadaComputador) {
    if (jogadaJogador == jogadaComputador) {
        printf("\t**** Empate! ****\n");
    } else if ((jogadaJogador == 0 && jogadaComputador == 2) ||
               (jogadaJogador == 1 && jogadaComputador == 0) ||
               (jogadaJogador == 2 && jogadaComputador == 1)) {
        printf("\t**** Voce ganhou! ****\n");
    } else {
        printf("\t**** Voce perdeu =( ****\n");
    }
}

int main() {
    int jogadaJogador, jogadaComputador, reproc;
	do{
		system("cls");
    printf("\t****Bem-vindo ao Pedra, Papel e Tesoura!****\n");
    printf("\n\tEscolha sua jogada:\n\n");
    printf("\t0 - Pedra\n");
    printf("\t    ____\n\t  _/  _ \\ \n\t / _ - _ \\ \n\t \\_______/\n\n");
    printf("\t1 - Papel\n");
    printf("\t    _____\n\t   O_____O\n\t  /     /\n\t /____ /\n\tO_____O\n\n");
    printf("\t2 - Tesoura\n");
    printf("\t    _    _\n\t   (_)  / )\n\t     | (_/\n\t    _+/\n\t   //|\\ \n\t  // || \n\t (/  |/\n\n");

    //lê a jogada do jogador
    scanf("%d", &jogadaJogador);

    //verifica se a jogada do jogador é válida
    if (jogadaJogador < 0 || jogadaJogador > 2) {
        printf("\tJogada invalida. Tente novamente.\n");
        return 1;
    }

    //gera a jogada do computador
    srand(time(NULL));
    jogadaComputador = gerarJogadaComputador();

    printf("\tVoce escolheu:\n\n ");
    switch (jogadaJogador) {
        case 0:
            printf("\tPedra\n");
            printf("\t    ____\n\t  _/  _ \\ \n\t / _ - _ \\ \n\t \\_______/\n\n");
            break;
        case 1:
            printf("\tPapel\n");
            printf("\t    _____\n\t   O_____O\n\t  /     /\n\t /____ /\n\tO_____O\n\n");
            break;
        case 2:
            printf("\tTesoura\n");
            printf("\t    _    _\n\t   (_)  / )\n\t     | (_/\n\t    _+/\n\t   //|\\ \n\t  // || \n\t (/  |/\n\n");
            break;
    }

    printf("\tO computador escolheu: \n\n");
    switch (jogadaComputador) {
        case 0:
            printf("\tPedra\n");
            printf("\t    ____\n\t  _/  _ \\ \n\t / _ - _ \\ \n\t \\_______/\n\n");
            break;
        case 1:
            printf("\tPapel\n");
            printf("\t    _____\n\t   O_____O\n\t  /     /\n\t /____ /\n\tO_____O\n\n");
            break;
        case 2:
            printf("\tTesoura\n");
            printf("\t    _    _\n\t   (_)  / )\n\t     | (_/\n\t    _+/\n\t   //|\\ \n\t  // || \n\t (/  |/\n\n");
            break;
    }

    exibirResultado(jogadaJogador, jogadaComputador);
    
    printf("Deseja jogar novamente? Digite 1 para continuar ou qualquer outro numero para sair: ");
    scanf("%d", &reproc);
	}while(reproc == 1);

    return 0;
}
