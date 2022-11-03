#include <stdio.h>


void imprimirOpcoes(float gasto){
    printf("           Qual das opções você deseja           |\n");
    printf("|                                                |\n");
    printf("| 1 - A VISTA COM 10 %% DE DESCONTO               |\n");
    printf("|                                                |\n");
    printf("| 2 - PARCELADO DUAS VEZES SEM DESCONTO          |\n");
    if(gasto>100.00){
        printf("|                                                |\n");
        printf("| 3 - DE 3 A 10 VEZES COM 3%% de JUROS/MES        |\n");
        printf("|                                                |\n");
    }
    printf("\n\nInsira a opcao escolhida: ");
}

float opcao1(float gasto){
    return gasto - (gasto*0.1);
}

float opcao2(float gasto){
    return gasto/2.0;
}

void opcao3(float gasto){
    int parcelas;
    float valor;
    printf("Em quantas vezes deseja parcelar: ");
    scanf("%d", &parcelas);
    if(parcelas>10)
        printf("Não é possível parcelar em mais de 10 vezes\n");
    else{
        valor = gasto/parcelas;
        for(int i=1; i<=parcelas; i++){
            printf("Parcela %d: %.2f\n", i, valor + (gasto*0.03)); 
            gasto -=valor;                                          //aplica os 3% de juros ao valor restante a ser pago
        }                                                           //e não ao valor inicial
    }
}

void imprimeValorFinal(float gasto, int opcao){
    switch(opcao){
        case 1: 
            printf("Valor a ser pago: %.2f\n", opcao1(gasto)); 
        break;
        case 2: 
            printf("Parcela 1: %.2f\n", opcao2(gasto)); 
            printf("Parcela 2: %.2f\n", opcao2(gasto)); 
        break;
        case 3: opcao3(gasto);
        break;
    }
}

int main()
{
    float gasto;
    int opcao;
    
    printf("Insira o valor gasto: ");
    scanf("%f", &gasto);
    imprimirOpcoes(gasto);
    scanf("%d", &opcao);
    imprimeValorFinal(gasto, opcao);
    
    return 0;
}


