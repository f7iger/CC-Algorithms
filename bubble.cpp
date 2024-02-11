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

int main(void){
  int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  //imprimeVetor(vetor);
  int x, y, aux;
  for(x = 0; x < TAM; x++){
	for(y = x + 1; y < TAM; y++){
	  // Confere se precisa fazer a troca
	  if(vetor[x] > vetor[y]){
		aux = vetor[x];
		vetor[x] = vetor[y];
		vetor[y] = aux;
	  }
	}
  }
  imprimeVetor(vetor);

  return 0;
}
