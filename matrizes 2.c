#include <stdio.h>

void ler_matriz (int mat [][4], int linha, int coluna){
    int i, j;
    for (i=0; i<linha; i++){
        for (j=0; j<coluna; j++)
            scanf ("%d", &mat[i][j]);
    }
}

void print_matriz (int mat [][4], int linha, int coluna){
    int i, j;
    for (i=0; i<linha; i++){
        for (j=0; j<coluna; j++){
            printf ("%d ", mat [i][j]);
        }
        printf ("\n");
    }
}

void somar_coluna (int mat [][4], int linha, int coluna){
    int i, j, soma = 0;
    for (i=0; i<coluna; i++){
        for (j=0; j<linha; j++){
                soma+=mat[j][i];
        }
        printf ("Soma da coluna %d = %d\n", i, soma);
        soma = 0;
    }
} 

int main()
{
    int mat [4][4];
    printf ("Digite os elementos da matriz:\n");
    ler_matriz (mat, 4, 4);
    print_matriz (mat, 4, 4);
    somar_coluna (mat, 4, 4);

    return 0;
}