/******************
 *  Comparar o algoritmo de Fibonacci 
 * RECURSIVO e ITERATIVO e comparar o 
 * tempo de execução de cada um.
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long long int fibonacciRecursivo(int n){
	if(n == 1)
		return (0);
	else{
		if (n == 2)
			return 1;
		else
			return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
	}
}

long long int fibonacciIterativo(int n)
{
	long long int a = 0, b = 1, c, i = 2;
	if (n == 1)
		return a;
	else{
		if (n == 2)
			return b;
		else{
			while(i < n){
				c = a + b;
				a = b;
				b = c;
				i++;
			}
			return c;
		}
	}
}

int	main(void)
{
	int n = 40;
	time_t tIni, tFim;

	tIni = time(NULL);
	printf("Fibonacci Iterativo: %lld\n", fibonacciIterativo(n));
	tFim = time(NULL);	
	printf("\t Tempo em segundos: %f\n\n", difftime(tFim, tIni));


	tIni = time(NULL);
	printf("Fibonacci Recursivo: %lld\n", fibonacciRecursivo(n));
	tFim = time(NULL);	
	printf("\t Tempo em segundos: %f\n\n", difftime(tFim, tIni));


	return (0);
}