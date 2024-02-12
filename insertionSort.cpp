#include <iostream>
#include <string>
using namespace std;
#define TAM 10

void imprimeVetor(int vetor[]){
  cout << "\n";
  for(int i = 0; i < TAM; i++){
	cout << " |" << vetor[i] << "| ";
  }
}
void insertionSort(int vetor[]){
  int i, j, atual;
  for(i = 1; i < TAM; i++){
	atual = vetor[i]; // Elemento atual em análise
	j = i - 1; // Elemento anterior ao analisado

	// Analisando membros anteriores
	while( (j>=0) && (atual < vetor[j]) ){
	  vetor[j + 1] = vetor[j]; // Posiciona os elementos uma posição a frente
	  j = j -1; // Faz o j andar para trás
	}

	vetor[j + 1] = atual; // Colocamos o menor número na posição correta
	imprimeVetor(vetor);
  }
}


int main(void){
  int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  insertionSort(vetor);
  imprimeVetor(vetor);
			
}
