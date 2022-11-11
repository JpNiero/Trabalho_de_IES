#include <stdio.h>

int fat (int numero){
	int fatorial;
	if (numero > 0){  
	   return numero*fat(numero-1); 
	}
	else
	    return 1;
}

int main( )
{
	int numero;
	printf ("Qual numero voce deseja obter o fatorial: \n");
	scanf ("%d", &numero);
	printf ("Fatorial = %d\n", fat(numero));
	
	return 0;
}