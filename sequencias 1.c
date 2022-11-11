#include <stdio.h>


float converterDecimetros(float metros){
    return metros * 10;
}

float converterCentimetros(float metros){
    return metros * 100;
}

float converterMilimetros(float metros){
    return metros * 1000;
}

int main(){
    float metros;

    printf("Inisira o valor em metros: ");
    scanf("%f", &metros);
    printf("Decimetros: %.2f\n", converterDecimetros(metros));
    printf("Centimetros: %.2f\n", converterCentimetros(metros));
    printf("Milimetros: %.2f\n", converterMilimetros(metros));

    return 0;
}