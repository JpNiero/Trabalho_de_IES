#include <stdio.h>

void ler(int m[3][3]){
    int i,j;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                scanf("%d",&m[i][j]);
            }
        }

}

void print(int m[3][3]){
    int i,j;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("%d ",m[i][j]);
            }
             printf("\n");
        }

}


int maior(int m[3][3]){ //FUNÇÃO PARA BUSCAR O MAIOR
    int i,j; int maior = m[0][0];
       for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(m[i][j] > maior)
                    maior = m[i][j];
            }
        }
        return maior;
}

int menor(int m[3][3]){ //FUNÇÃO PARA BUSCAR O MENOR
    int i,j; int menor = m[0][0];
       for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(m[i][j] < menor)
                    menor = m[i][j];
            }
        }
        return menor;
}

int main()
{
    int m[3][3];
    ler(m); //FUNÇÃO PARA LER A MATRIZ
    print(m); //FUNÇÃO PARA PRINTAR A MATRIZ
    printf("O maior valor é: %d\n",maior(m)); //PRINT PARA LER O MAIOR
    printf("O menor valor é: %d\n",menor(m)); //PRINT PARA LER O MENOR

    return 0;
}