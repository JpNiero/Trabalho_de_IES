#include <stdio.h>
#include <math.h>

int fat(int i){ //FUNÇÃO QUE FAZ O FATORIAL DO NÚMERO UTILIZADA NA CONTA
    if(i==0) return 1;
        else return ifat(i-1);

}

int main(){

    int i; double op, x, s = 1;
        scanf("%lf",&x);
    for(i = 1;;i++){ //LAÇO REPONSAVEL POR FAZER O SOMATORIO DA OPERAÇÃO
        op = x*i/fat(i);
        if(op < pow(10,-6)) // IF RESPONSAVEL PARA FAZER A VERIFICAÇÃO ATÉ 10^-6
            break;
        s += op;
    }
    printf("%lf",s);

    return 0;
}