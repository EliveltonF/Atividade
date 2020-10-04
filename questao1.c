#include <stdio.h>

int main() {
  char nome[100];
  char nome_copia[100];
  printf("Digite um nome: ");
  scanf("%s",nome);
  for(int i = 0; nome[i]; i++){
  nome_copia[i] = nome[i];
  }
  printf("Copia do nome: %s",nome);
  
}
