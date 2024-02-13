#include <iostream>
#include <string>
#define TAM 10
using namespace std;

void imprimeVetor(int vetor[]){
  cout << "\n";
  for(int i = 0; i < TAM; i++){
	cout << " |" << vetor[i] << "| ";
  }
}

void quickSort(int vetor [TAM], int inicio, int fim){
  int pivo, left, right, meio, aux;
  // Limites da esquerda e direita da região analisada
  left = inicio;
  right = fim;
  // Ajustando auxiliares do centro
  meio = (int) ((left + right) / 2);
  pivo = vetor[meio];
  while(right > left){
	while(vetor[left] < pivo){
	  left = left + 1;
	}

	while(vetor[right] > pivo){
	  right = right - 1;
	}

	if(left <= right){
	  // Realiza uma troca
	  aux = vetor[left];
	  vetor[left] = vetor[right];
	  vetor[right] = aux;

	  // Faz os limites laterais caminharem para o centro
	  left = left + 1;
	  right = right - 1;
	}
  }
  if(inicio < right){
	quickSort(vetor, inicio, right);
  }

  if(left < fim){
	quickSort(vetor, fim, left);
  }

}


int main(void){
  int vetor[TAM] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  quickSort(vetor, 0, TAM);
  imprimeVetor(vetor);

  return 0;
}
