#include <stdio.h>

double calcularFahrenheitDouble(double f){
    return (f-32.0) * (5.0/9.0);
}

int calcularFahrenheitInt(int f){
    return (f-32)*(5/9.0);
}

int main(){

    double fahrenheitDouble;
    int fahrenheitInt;
    char tipoDado;

    printf("deseja converter um número inteiro (I) ou decimal (D)?\n");
    scanf("%c", &tipoDado);

    if(tipoDado == 'I'){
        printf("insira Fahrenheit inteiro\n");
        scanf("%d", &fahrenheitInt);
        printf("%d", calcularFahrenheitInt(fahrenheitInt));
    }else if(tipoDado == 'D'){
        printf("Insitra Fahrenheit decimal\n");
        scanf("%lf", &fahrenheitDouble);
        printf("%lf", calcularFahrenheitDouble(fahrenheitDouble));
    }

    return 0;
}