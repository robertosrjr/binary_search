/*
 ============================================================================
 Name        : BuscaSequencial.c
 Author      : Roberto S. Ramos Jr
 Version     : 1.0
 Copyright   : robertosrjr@gmail.com
 Description : Algoritmo de Busca Binária in C, Ansi-style
 	 	 	 : Obs.: A lista deve estar ordenada.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int vec[] = {2, 8, 12, 28, 31, 33, 37, 41, 42, 47};

int main(void) {

	int resp_busca_binaria = -1;
	int num_a_ser_pesquisado = 41;

	resp_busca_binaria = buscaBinaria(vec, num_a_ser_pesquisado, 10);

	if (resp_busca_binaria == -1) {

		printf("\nO número %d não foi encontrado.", num_a_ser_pesquisado);
	} else {

		printf("\nO número %d foi encontrado na posição %d.", num_a_ser_pesquisado, resp_busca_binaria);
	}


	return EXIT_SUCCESS;
}


int buscaBinaria(int vec[], int arg, int tam) {

	int menor = 0;
	int maior = tam-1;
	int meio = 0;

	while (menor <= maior) {

		meio = (menor + maior)/2;
		if (arg == vec[meio]) {

			return (meio);
		}

		if (arg < vec[meio]) {

			maior = meio - 1;
		} else {

			menor = meio + 1;
		}
	}
	return(-1);
}
