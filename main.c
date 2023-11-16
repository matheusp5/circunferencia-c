#include <stdio.h>

int main() {
    const double PI = 3.14159265358979323;

    while(1) {
        printf("\n");
        printf("\n");
        printf("Operacoes com Circunferencia\n");
        float r;
        printf("Insira o valor do raio: ");
        scanf("%f", &r);

        printf("\n");
        printf("Perimetro: %f\n", 2 * PI * r);
        printf("Valor da area: %f\n", PI * r * r);
    }
}
