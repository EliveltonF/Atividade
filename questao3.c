#include <stdio.h>

int main(void) {
  char nome[50],nome1[50],juntos[100];
  int cont1, cont2 = 0;
  printf("Digite uma palavra\n");
  scanf("%s",nome);
  printf("Digite outro nome\n");
  scanf("%s",nome1);
  for(int i = 0; nome[i]; i++){
    if(nome[i] != nome1[i]){
      cont1++;
    }
    cont2++;
  }
  if (cont1 != 0){
    printf("%s%s",nome, nome1);
  }else{
    printf("nomes iguais!");
  }
  return 0;
}
