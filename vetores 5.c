#include <stdio.h>
#define MAX 10

void ler_vetor (int vet[]){
    int i;
    printf ("Digite os elementos do vetor:\n");
    for (i=0; i<10; i++){
        scanf ("%d", &vet[i]);
    }
}

int calcula_media(int vet[]){
    int i, media = 0;
    for (i=0; i<10; i++){
        media+=vet[i];
    }
    return media/10;
}

void encontra_media(int vet[], int media){
    int i;
    for (i=0; i<10; i++){
        if (vet[i] == media)
            printf ("O elemento %d da posicao %d eh igual a media\n", vet[i], i); //a posição que é printada é o índice do vetor
    }
}

int main()
{
   int vet[10], media;
   ler_vetor(vet);
   media = calcula_media(vet);
   encontra_media(vet, media); //verifica se um elemento é igual a média

    return 0;
}

