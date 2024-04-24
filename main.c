#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
  int ano, cal, cal2, cal3;
  printf("Digite um ano: ");
  scanf("%i", &ano);
  getchar()
  cal = ano % 4;
  cal2 = ano % 100;
  cal3 = ano % 400;
  if(cal2 != 0){
    if(cal == 0){
      printf("O ano digitado é bissexto");
    }
    else{
      printf("O ano digitado não é bissexto");
    }
  }
  else{
    if(cal3 == 0){
      printf("O ano digitado é bissexto");
    }
    else{
      printf("O ano digitado não é bissexto");
    }
  }
  getchar();
}