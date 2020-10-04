#include <stdio.h>

int main() {
  int cont = 0;
  char nome[100];
  char nome2[100];
  printf("Digite um nome: ");
  scanf("%s",nome);
  printf("Digite um nome: ");
  scanf("%s",nome2);
  for(int i = 0; nome[i]; i++){
  if(nome2[i] == nome[i]){
    cont++;
      }
    else {
    return printf("Não são iguais!");
    }
  }
}
