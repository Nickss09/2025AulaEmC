#include <stdio.h>
 int soma(int numero1, int numero2){
     return numero1 + numero2;
 }
 
 int multiplica (int numero1, int numero2){
     return numero1 * numero2;
 }
 
 float calcularMedia(float numero1, float numero2){
     return (numero1 + numero2) / 2;
 }
 
 void imprimirResultadoMedia(){
     float numero1, numero2, resultado;
      printf("Digite o primeiro numero inteiro: ");
     scanf("%f", &numero1);
     
     printf("Digite o segundo numero inteiro: ");
     scanf("%f", &numero2);
    //  tipo_retorno nome_da_funcao(parametro1, parametro2, parametroN);
     resultado = calcularMedia(numero1, numero2);
     
     printf("\nA media aritimetica dos numeros %.2f + %.2f é igual a: %.2f", numero1, numero2, resultado);
     
 }
 
 
 
 int main() {
     
     imprimirResultadoMedia();
     return 0;
 }