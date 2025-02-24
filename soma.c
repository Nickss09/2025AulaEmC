#include <stdio.h>

int soma(int num1, int num2) {
    int resultado = num1 + num2;
    
    return resultado; 
}

int main()
{
    int resultado_soma = soma(10, 5);
    
    printf("%d", resultado_soma);

    return 0;
}