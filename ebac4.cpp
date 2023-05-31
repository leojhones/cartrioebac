#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void registro();
void consulta();
void deletar();

int main() {
    int opcao = 0;
    int laco;

    for(laco=1; laco<=4; laco++) {
        setlocale(LC_ALL, "Portuguese");
        system("cls");
        printf("### cartório da ebac ###\n\n");
        printf("### escolha a opcão desejada do menu:\n\n");
        printf("\t1 - registra nomes\n");
        printf("\t2 - consultar nomes\n");
        printf("\t3 - deletar nomes\n\n");
        printf("opção: ");
        scanf("%d", &opcao);
        system("cls");
       
        switch(opcao) {
            case 1:
                registro();
                printf("você escolheu o registro de nomes!\n");
                system("pause");
                break;
    
            case 2:
                consulta();
                printf("você escolheu consultar os nomes!\n");
                system("pause");
                break;
    
            case 3:
                deletar();
                printf("você escolheu deletar os nomes!\n");
                system("pause");
                break;
    
            default:
                printf("essa opção não está disponível!\n");
                system("pause");
                break;
        }
    }
    
    return 0;
}

void registro() {
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    char arquivo[40];
    
    printf("Digite o cpf a ser cadastrado: ");
    scanf("%s", cpf);
    
    strcpy(arquivo, cpf);
    
    FILE *file;
    file = fopen(arquivo, "w");
    fprintf(file, "%s", cpf);
    fclose(file);
    file = fopen(arquivo, "a");
    fprintf(file, ",");
    
    printf("Digite o nome a ser cadastrado: ");
    scanf("%s", nome);
    
    file = fopen(arquivo,"a");
    fprintf(file, "%s", nome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file, ",");
    
    printf("Digite o sobrenome a ser cadastrado: ");
    scanf("%s", sobrenome);
    
    file = fopen(arquivo,"a");
    fprintf(file, "%s", sobrenome);
    fclose(file);
    
    printf("Digite o cargo a ser cadastrado: ");
