#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nome[30];
    char endereco[100];
    char fone[10];
    long int CEP;
}AGENDA;

int escolha_de_opcao (int *num){ //faz a leitura da opcao desejada do menu
    printf ("\nDigite a funcao que deseja executar:\n");
    printf ("1 - Entrar um novo nome na agenda\n");
    printf ("2 - Imprimir dados da pessoa\n");
    printf ("3 - Imprimir lista de nomes que comecem por tal letra\n");
    printf ("4 - Sair\n");
    scanf ("%d%*c", num);
    
    return *num;
}

void ler_pessoa (AGENDA p[], int i){ //faz a leitura dos dados que a agenda irá conter
    printf ("Digite os dados da pessoa:\n");
    printf ("Nome:\n");
    scanf ("%[^\n]%*c", p[i].nome);
    printf ("Endereco:\n");
    scanf ("%[^\n]%*c", p[i].endereco);
    printf ("Fone:\n");
    scanf ("%[^\n]%*c", p[i].fone);
    printf ("CEP:\n");
    scanf ("%ld%*c", &p[i].CEP);
}

int imprimir_dados (AGENDA p[], int i, char nome[]){ //imprime os dados de certa pessoa, de acordo com o nome digitado
    int j;
    for (j = 0; j<i; j++){
        if(strcmp(nome, p[j].nome) == 0){
            printf ("Nome: %s\n", p[j].nome);
            printf ("Endereco: %s\n", p[j].endereco);
            printf ("Fone: %s\n", p[j].fone);
            printf ("CEP: %ld\n", p[j].CEP);
            return 0;
        }
    }
    printf ("Pessoa nao encontrada!\n");
}

void imprimir_nomes (AGENDA p[], int i, char letra){ //imprime a lista de nomes cadastrados que comecem pela letra digitada
    int j;
    for (j=0; j<i; j++){
        if (letra == p[j].nome[0]){
            printf ("Nomes com a letra digitada: %s\n", p[j].nome);
        }
    }
}

int main()
{
    AGENDA p[100];
    char nome[30]; //nome desejado para procurar na agenda
    char letra; //letra para imprimir os nomes que comecam por ela
    int num; //seleciona a opcao do menu
    int i; //controla a posição do vetor da struct
    
    do{
        escolha_de_opcao(&num);
        
        if (num == 1){
            do{
                ler_pessoa(p, i);
                i++;
                num = 0;
                system("clear");
            }while (num == 1);
    }else{
        if (num == 2){
            do{
                printf ("Nome que deseja procurar: ");
                scanf ("%[^\n]%*c", nome);
                imprimir_dados(p, i, nome);
                num = 0;
            }while (num == 2);
        }else{
            if (num == 3){
                printf ("Letra do nome que deseja: ");
                scanf ("%c%*c", &letra);
                imprimir_nomes(p, i, letra);
                num = 0;
            }
        }
    } 
    
    }while (num != 4);

    return 0;
}



