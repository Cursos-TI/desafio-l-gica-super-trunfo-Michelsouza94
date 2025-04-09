#include <stdio.h>

int main() {
    // Declaração das variáveis para os dados das cartas
    char estado1[] = "M", estado2[] = "J"; // Estados das cidades
    char codigodacidade1[20] = "M01", codigodacidade2[20] = "J01"; // Códigos das cidades
    char nomedacidade1[20] = "Recreio", nomedacidade2[20] = "Juiz de Fora"; // Nomes das cidades
    int populacao1 = 800000, populacao2 = 900000; // População das cidades
    float area1 = 1200.11, area2 = 1300.22; // Área das cidades
    float pib1 = 200.50, pib2 = 400.70; // PIB das cidades
    int numerodepontosturisticos1 = 10, numerodepontosturisticos2 = 50; // Pontos turísticos

    // Cálculos das densidades populacionais e PIB per capita
    float densidadepop1 = populacao1 / area1;
    float densidadepop2 = populacao2 / area2;
    float pibpercapita1 = pib1 / populacao1;
    float pibpercapita2 = pib2 / populacao2;

    // Atributo escolhido para comparação (População neste caso)
    int atributoEscolhido = 1; // 1 para População

    // Exibição das informações de comparação
    printf("Comparação de cartas (Atributo escolhido: ");
    if (atributoEscolhido = 1) {
        printf("População):\n");
        printf("Carta 1 - %s (%s): População = %d\n", nomedacidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): População = %d\n", nomedacidade2, estado2, populacao2);
        
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu! População maior: %d\n", nomedacidade1, populacao1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu! População maior: %d\n", nomedacidade2, populacao2);
        }
        
    }

    
}