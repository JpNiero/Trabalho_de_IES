
#include <stdio.h>

void print_um_digito (int numero){
    int num;
    num = numero%10;
    if (num == 1) printf ("um");
    if (num == 2) printf ("dois");
    if (num == 3) printf ("tres");
    if (num == 4) printf ("quatro");
    if (num == 5) printf ("cinco");
    if (num == 6) printf ("seis");
    if (num == 7) printf ("sete");
    if (num == 8) printf ("oito");
    if (num == 9) printf ("nove");
}

void print_dois_digitos (int numero){
    int num, num2;
    num = numero%10;
    num2 = numero/10;
    if (num2 == 1) printf ("um, ");
    if (num2 == 2) printf ("dois, ");
    if (num2 == 3) printf ("tres, ");
    if (num2 == 4) printf ("quatro, ");
    if (num2 == 5) printf ("cinco, ");
    if (num2 == 6) printf ("seis, ");
    if (num2 == 7) printf ("sete, ");
    if (num2 == 8) printf ("oito, ");
    if (num2 == 9) printf ("nove, ");
    
    if (num == 1) printf ("um");
    if (num == 2) printf ("dois");
    if (num == 3) printf ("tres");
    if (num == 4) printf ("quatro");
    if (num == 5) printf ("cinco");
    if (num == 6) printf ("seis");
    if (num == 7) printf ("sete");
    if (num == 8) printf ("oito");
    if (num == 9) printf ("nove");
}

void print_tres_digitos (int numero){
    int num, num2, num3, aux;
    num = numero/100;
    aux = numero%100;
    num2 = aux/10;
    num3 = numero%10;
    if (num == 1) printf ("um, ");
    if (num == 2) printf ("dois, ");
    if (num == 3) printf ("tres, ");
    if (num == 4) printf ("quatro, ");
    if (num == 5) printf ("cinco, ");
    if (num == 6) printf ("seis, ");
    if (num == 7) printf ("sete, ");
    if (num == 8) printf ("oito, ");
    if (num == 9) printf ("nove, ");
    
    if (num2 == 1) printf ("um, ");
    if (num2 == 2) printf ("dois, ");
    if (num2 == 3) printf ("tres, ");
    if (num2 == 4) printf ("quatro, ");
    if (num2 == 5) printf ("cinco, ");
    if (num2 == 6) printf ("seis, ");
    if (num2 == 7) printf ("sete, ");
    if (num2 == 8) printf ("oito, ");
    if (num2 == 9) printf ("nove, ");
    
    if (num3 == 1) printf ("um");
    if (num3 == 2) printf ("dois");
    if (num3 == 3) printf ("tres");
    if (num3 == 4) printf ("quatro");
    if (num3 == 5) printf ("cinco");
    if (num3 == 6) printf ("seis");
    if (num3 == 7) printf ("sete");
    if (num3 == 8) printf ("oito");
    if (num3 == 9) printf ("nove");
}

int main()
{
    int numero;
    printf ("Digite um numero menor que 1000: ");
    scanf ("%d", &numero);
    
    if (numero < 10){
        print_um_digito (numero);
    }
    if (numero > 10 && numero < 100){
        print_dois_digitos (numero);
    }
    if (numero > 100 && numero < 1000){
        print_tres_digitos (numero);
    }

    return 0;
}

