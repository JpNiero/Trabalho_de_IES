#include <stdio.h>

void ler(int a[], int x){
    int i;
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);
}

void med(int a[], int x){
    int i, soma;
    for(i=0;i<x;i++){
        soma+= a[i];
    }
        printf("A MÉDIA DOS NÚMEROS DO VETOR É: %d\n",soma/x);
}

void menor(int a[],int x){
    int i, menor = a[0];
        for(i=0;i<x-1;i++){
            if(menor>a[i])
                menor = a[i];
        }
            printf("O MENOR VALOR DO VETOR É: %d\n",menor);
    
}

void maior(int a[],int x){
    int i, maior = a[0];
        for(i=0;i<x-1;i++){
            if(maior<a[i])
                maior = a[i];
        }
            printf("O MAIOR VALOR DO VETOR É: %d\n",maior);
    
}

int main()
{
    int a[10];
    ler(a,10);//FUNÇÃO PARA LER O VETOR
    med(a,10);//FUNÇÃO PARA SER FEITA A MEDIA
    menor(a,10);//FUNÇÃO PARA ENCONTRAR O MENOR VALOR DO VETOR
    maior(a,10);//FUNÇÃO PARA ENCONTRAR O MAIOR VALOR DO VETOR
    return 0;
}


