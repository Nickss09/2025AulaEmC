#include <stdio.h>
 void imprimirNumerosPares(int max_repeticao){
     int i;
     
     for(i = 0; i <= max_repeticao ; i ++){
         if(i % 2 == 0){
             printf ("%d ", i);
         }
     }
 }
 int main() {
     int quantidadeRepeticao;
     
     printf("Informe a quantidade de repetições: ");
     scanf("%d", &quantidadeRepeticao);
     
    imprimirNumerosPares(quantidadeRepeticao);
     return 0;
 }