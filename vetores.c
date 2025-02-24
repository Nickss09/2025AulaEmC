#include <stdio.h>

void verificaNumero(int numero) {
    if (numero == 0){
        printf("O número %d é neutro.", numero);
    } else if (numero > 0){
        printf("O número %d é positivo", numero);
    } else{
        printf("O número %d é negativo", numero);
    }
}

void imprimirVetor(int vet[]){
    int i;
    
    for(i = 0; i < 10; i++){
        printf ("%d ", vet[i]);
    }
}

int main()
{
    int vet[10], i;
    
    for(i = 0; i < 10; i++){
        vet[i] = i + 1;
    }
    
    imprimirVetor(vet);
    
    return 0;
}
