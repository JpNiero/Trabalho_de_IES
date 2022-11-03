#include <stdio.h>

void ler(double m[3][4]){
    int i,j; double ms[3][4];
        for(i=0;i<3;i++){
            for(j=0;j<4;j++){
                scanf("%lf",&m[i][j]);
            }
        }

}

void print(double m[3][4]){
    int i,j;
        for(i=0;i<3;i++){
            for(j=0;j<4;j++){
                printf("%.1lf ",m[i][j]);
            }
            printf("\n");
        }

}


void soma(double m[3][4],double g[3]){ //FUNÇÃO QUE FAZ A SOMA DE CADA LINHA DA MATRIZ
    int i,j,somap = 0;
       for(i=0;i<3;i++){
            for(j=0;j<4;j++){
                somap+=m[i][j];
            }
            g[i]=somap;
            somap = 0;
        }
        for(i=0;i<3;i++)
            printf("%.2lf\n",g[i]);
}

int main()
{
    double m[3][4], g[3];
    ler(m); //FUNÇÃO PARA LER A MATRIZ
    print(m);  //FUNÇÃO PARA PRINTAR A MATRIZ
    soma(m,g);  //FUNÇÃO QUE FAZ A SOMA DE CADA LINHA DA MATRIZ

    return 0;
}