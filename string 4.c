#include <stdio.h>
#include <string.h>

void criarString(char dst[], char nome[], char endereco[], char telefone[], char idade[]){
    char str1[] = "Seu nome é ";
    char str2[] = ", Voce tem ";
    char str3[] = " anos, mora na rua ";
    char str4[] = " e seu telefone é "; 
    
    strcat(dst, str1);
    strcat(dst, nome);
    strcat(dst, str2);
    strcat(dst, idade);
    strcat(dst, str3);
    strcat(dst, endereco);
    strcat(dst, str4);
    strcat(dst, telefone);
}


int main()
{
    char nome[30], endereco[50], telefone[20], idade[3];
    char dst[250] = "";

    printf("Qual seu nome?\n");
    scanf("%[^\n]%*c", nome);
    printf("Qual seu endereço?\n");
    scanf("%[^\n]%*c", endereco);
    printf("Qual seu telefone?\n");
    scanf("%[^\n]%*c", telefone);
    printf("Quantos anos voce tem?\n");
    scanf("%[^\n]%*c", idade);
    
    criarString(dst, nome, endereco, telefone, idade);
    
    printf("%s\n", dst);

    return 0;
}

