#include <hellomake.h>
#include <stdlib.h>
#include <stdio.h>

#define MAX 100
int esPalindromo(char *palabra);

int main(){
	// llamar a una función en otro archivo
	myPrintHelloMake ();

	char line[MAX];
	int a = 0;
	printf("Escriba palabra para comprobar si es palíndromo: \n");
	scanf("%s",line);
	a = esPalindromo(line);
	if(a == 0)
		printf("No es palindromo\n");
	else
		printf("Es palindromo\n");
	return(0);
}
