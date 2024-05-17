#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "banco.h" 

void criar_cliente(Conta clientes[], int *num_clientes) {
    if (*num_clientes >= MAX_CLIENTES) {
        printf("O banco atingiu o limite máximo de clientes.\n");
        return;
    }

    printf("=== Criar Novo Cliente ===\n");

    printf("Nome: ");
    char nome[MAX_NOME];
    scanf(" %[^\n]", nome);

    printf("CPF: ");
    char cpf[MAX_CPF];
    scanf(" %[^\n]", cpf);

    printf("Tipo de conta (C para Comum, P para Plus): ");
    char tipo_conta;
    scanf(" %c", &tipo_conta);

    printf("Valor inicial da conta: R$ ");
    double saldo_inicial;
    scanf("%lf", &saldo_inicial);

    printf("Senha do usuario: ");
    char senha[MAX_SENHA];
    scanf(" %[^\n]", senha);

    Conta novo_cliente;
    novo_cliente.numero_conta = *num_clientes + 1; 
    strcpy(novo_cliente.nome, nome);
    strcpy(novo_cliente.cpf, cpf);
    novo_cliente.tipo_conta = tipo_conta;
    novo_cliente.saldo = saldo_inicial;
    strcpy(novo_cliente.senha, senha);

    clientes[*num_clientes] = novo_cliente;

    (*num_clientes)++; 

    printf("Novo cliente criado com sucesso.\n");
}
