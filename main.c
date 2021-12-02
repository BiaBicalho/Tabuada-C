//Programa para imprimir a tabuada de um valor informado pelo usuário.*/
#include <stdio.h>

int main() {
 int num,n;
 printf("\nDigite a tabuada que queira saber: ");
 scanf("%d",&num);
 printf("\nA Tabuada de %d é: \n\n", num);
  // uso do for para repetir o calculo da tabuada quantas vezes for necessário 
 for(n=1; n<= 10; n=n+1)
 printf("     %d * %d = %d \n",num,n,num*n);

 return 0;
}

