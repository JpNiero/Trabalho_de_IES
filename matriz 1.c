#include <stdio.h>

void ler_mat (int mat [][3], int linha, int coluna){
    int i, j;
    for (i=0; i<linha; i++){
        for (j=0; j<coluna; j++)
            scanf ("%d", &mat[i][j]);
    }
}

void print_mat (int mat [][3], int linha, int coluna){
    int i, j;
    for (i=0; i<linha; i++){
        for (j=0; j<coluna; j++){
            printf ("%d ", mat [i][j]);
        }
        printf ("\n");
    }
}

void somar_imp (int mat [][3], int linha, int coluna){
    int i, j, soma = 0;
    for (i=0; i<linha; i++){
        for (j=0; j<coluna; j++){
            if (mat[i][j]%2 == 1)
                soma+=mat[i][j];
        }
    }
    printf ("Soma dos numeros impares = %d\n", soma);
} 

int main()
{
    int mat [3][3];
    printf ("Digite os elementos da matriz:\n");
    ler_mat (mat, 3, 3);
    print_mat (mat, 3, 3);
    somar_imp (mat, 3, 3);

    return 0;
}