#include <stdio.h>

void lerMatriz(int m[][4], int l, int c){
    int i, j;
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            scanf("%d", &m[i][j]);
        }
    }
}

void printarMatriz(int m[][4], int l, int c){
    int i, j;
    printf("Matriz:\n");
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            printf("%3d", m[i][j]);
        }
        printf("\n");
    }
}

void printarDiagonalSecundaria(int m[][4], int l, int c){
    int i, j;
    printf("Diagonal secundaria:\n");
    for(i=0; i<l;i++){
        for(j=0; j<c; j++){
            if(i+j == l-1 || i+j == c-1)
                printf("%3d", m[i][j]);
            else
                printf("   ");
        }
        printf("\n");
    }
    
}

int main()
{
    int m[4][4];
    
    lerMatriz(m, 4, 4);
    printarMatriz(m, 4, 4);
    printarDiagonalSecundaria(m, 4, 4);

    return 0;
}
