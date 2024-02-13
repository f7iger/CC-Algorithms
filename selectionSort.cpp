#include <iostream>
#include <string>
using namespace std;
#define TAM 10

void imprimeVetor(int vetor[]){
  cout << "\n";
  for(int i = 0; i < TAM; i++){
	cout << " |" << vetor[i] << "| ";
  }
};

void selectionSort(int vetor[]){
  int lowPosition, aux, i, j; // lowPosition é a posição do menor valor; aux é um auxiliar
  for(i = 0; i < TAM; i++){
	lowPosition = i;
	for(j = i + 1; j < TAM; j++){ // Analisa os elementos na frente
	  if(vetor[j] < vetor[lowPosition]){ // Caso encontre um valor menor na frente dos analisados
		lowPosition = j;
	  }
    }
	if(lowPosition != i){
	  aux = vetor[i];
	  vetor[i] = vetor[lowPosition];
	  vetor[lowPosition] = aux;
	}
	imprimeVetor(vetor);
  }
}
int main(void){
  int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  selectionSort(vetor);
  imprimeVetor(vetor);
	
  return 0;
}
