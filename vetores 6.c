#include <stdio.h>

void ler_mat(float m[][3], int linha, int coluna){
    int i, j;
    printf ("Digite os elementos da matriz: \n");
    for (i=0; i<linha; i++){
        for (j=0; j<coluna; j++)
            scanf ("%f", &m[i][j]);
    }
}

float media_coluna(float m[][3], int linha, int coluna){
    int i, j, contador = 0;
    float media = 0;
    for (j=0; j<coluna; j++){
        if (j%2 != 0){
            for (i=0; i<linha; i++){
                media += m[i][j];
                contador++;
            }
        }
        else ;
    }
    return media/contador;
}

float media_linha(float m[][3], int linha, int coluna){
    int i, j, contador = 0;
    float media = 0;
    for (i=0; i<linha; i++){
        if (i%2 == 0){
            for (j=0; j<coluna; j++){
                media += m[i][j];
                contador++;
            }
        }
        else ;
    }
    return media/contador;
}

int main()
{
    float m[5][3];
    float mediaLin, mediaCol;
    ler_mat(m, 5, 3);
    mediaCol = media_coluna(m, 5, 3);
    mediaLin = media_linha(m, 5, 3);
    printf ("A diferenca dos elementos das colunas pares e linhas impares eh igual a: %.2f\n", mediaCol - mediaLin);

    return 0;
}

