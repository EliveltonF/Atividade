#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char nome[100];
  char nome2[100];
  char ajuda[100];
  int contador = 0;
  printf("Nome: ");
  gets(nome);

  for(int i = strlen(nome)-1; i>=0; i--){
    nome[i] = tolower(nome[i]);
    if(nome[i] == ' '){
      continue;
    }
    nome2[contador] = nome[i];
    contador++;
  }
  contador = 0;
  for(int i = 0; i<strlen(nome); i++){
    if(nome[i] == ' '){
      continue;
    }
    ajuda[contador] = nome[i];
    contador++;
  }

  nome2[contador] = '\0';
  printf("%s\n",nome2);
  printf("%s\n",ajuda);
  
  if(strcmp(nome2, ajuda) == 0){
    printf("Palindromo");
  }
  else{
    printf("não é um palindromo");
  }
  return 0;
}
