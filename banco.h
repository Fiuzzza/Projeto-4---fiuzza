#ifndef BANCO_H
#define BANCO_H

#define MAX_NOME 50
#define MAX_CPF 15
#define MAX_SENHA 20
#define MAX_CLIENTES 100

typedef struct {
    int numero_conta;
    char nome[MAX_NOME];
    char cpf[MAX_CPF];
    char tipo_conta; // 'C' para Comum, 'P' para Plus
    double saldo;
    char senha[MAX_SENHA];
} Conta;

void inicializar_conta(Conta *conta, int numero_conta, char tipo_conta);
void exibir_menu();
void realizar_operacao(Conta *conta);
void exibir_saldo(Conta conta);
void fazer_deposito(Conta *conta);
void fazer_saque(Conta *conta);
void criar_cliente(Conta clientes[], int *num_clientes); // Protótipo da nova função

#endif
