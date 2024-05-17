#include <stdio.h>
#include "banco.h"

int main() {
    Conta clientes[MAX_CLIENTES];
    int num_clientes = 0;
    int opcao;

    printf("Bem-vindo ao banco QuemPoupaTem!\n");

    do {
        printf("\nOpcoes disponiveis:\n");
        printf("1. Criar novo cliente\n");
        printf("2. Realizar operacoes\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                criar_cliente(clientes, &num_clientes);
                break;
            case 2:
                // Implemente a chamada para a função realizar_operacao
                printf("Ainda não implementado.\n");
                break;
            case 3:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
