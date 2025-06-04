#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define MAX_CLIENTES 50

typedef struct
{
    int codigo;
    char nome[100];
    char email[100];
    int idade;
} Cliente;

Cliente clientes[MAX_CLIENTES];
int totalClientes = 0;

void exibirMenu();
void adicionarCliente();
void listarClientes();
void buscarCliente();

int main()
{
 
    setlocale(LC_ALL, "Portuguese_Brazil");
    int opcao;

    do
    {
        exibirMenu();
        scanf("%d", &opcao);
        getchar(); 

        switch (opcao)
        {
        case 1:
            adicionarCliente();
            break;
        case 2:
            listarClientes();
            break;
        case 3: 
            buscarCliente();
            break;
        case 0:
            printf("Saindo do sistema...\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
        }
        printf("\nPressione Enter para continuar...");
        getchar();

    } while (opcao != 4);

    return 0;
}

void exibirMenu()
{
    system("clear || cls");
    printf("==================================\n");
    printf("      SISTEMA DE CADASTRO\n");
    printf("==================================\n");
    printf("1 - Adicionar Cliente\n");
    printf("2 - Listar Clientes\n");
    printf("3 - Buscar cliente\n");
    printf("0 - Sair\n");
    printf("==================================\n");
    printf("Escolha uma opção: ");
}

void adicionarCliente()
{
    if (totalClientes < MAX_CLIENTES)
    {
        printf("\n--- ADICIONAR NOVO CLIENTE ---\n");

        printf("Nome: ");
        fgets(clientes[totalClientes].nome, sizeof(clientes[totalClientes].nome), stdin);


        printf("Email: ");
        fgets(clientes[totalClientes].email, sizeof(clientes[totalClientes].email), stdin);

        printf("Idade: ");
        scanf("%d", &clientes[totalClientes].idade);
        getchar();

        printf("Código: ");
        scanf("%d", &clientes[totalClientes].codigo);
        getchar(); 

        totalClientes++;
        printf("\nCliente adicionado com sucesso!\n");
    }
    else
    {
        printf("\nLimite máximo de clientes atingido (%d)!\n", MAX_CLIENTES);
    }
}

void listarClientes()
{
    printf("\n--- LISTA DE CLIENTES ---\n");
    if (totalClientes == 0)
    {
        printf("Nenhum cliente cadastrado.\n");
        return;
    }

    for (int i = 0; i < totalClientes; i++)
    {
        printf("\n--- Cliente %d ---\n", i + 1);
        printf("\nNome: %s", clientes[i].nome);
        printf("Email: %s", clientes[i].email);
        printf("Idade: %d", clientes[i].idade);
        printf("Código: %d", clientes[i].codigo);
    }
}

void buscarCliente()
{
    printf("\n--- BUSCAR CLIENTE ---\n");
    if (totalClientes == 0)
    {
        printf("Nenhum cliente cadastrado para buscar.\n");
        return;
    }

    int codigoBusca;
    printf("Digite o código do cliente que deseja buscar: ");
    scanf("%d", &codigoBusca);
    getchar(); 

    int encontrado = 0;
    for (int i = 0; i < totalClientes; i++)
    {
        if (clientes[i].codigo == codigoBusca)
        {
            printf("\n--- Cliente Encontrado ---\n");
            printf("\nNome: %s", clientes[i].nome);
            printf("Email: %s", clientes[i].email);
            printf("Idade: %d", clientes[i].idade);
            printf("\nCódigo: %d", clientes[i].codigo);
            encontrado = 1;
            break; 
        }
    }

    if (!encontrado)
    {
        printf("\nCliente com código %d não encontrado.\n", codigoBusca);
    }
}
