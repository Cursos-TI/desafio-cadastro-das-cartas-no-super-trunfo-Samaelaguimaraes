#include <stdio.h> 
int main() { 
    
char estado[2]; 
char codigo[4];
char cidade[50];
int povo;
float extensão;
float PIB;
int turisticos; 

char estado2[2]; 
char codigo2[4];
char cidade2[50];
int povo2;
float extensão2;
float PIB2;
int turisticos2; 

printf("Digite a inicial do estado: \n");
scanf("%s", estado);

printf("Digite o codigo da carta: \n");
scanf("%s", codigo);

printf("Digite o nome da cidade: \n");
scanf("%s", cidade); 

printf("Digite a população: \n");
scanf("%d", &povo);

printf("Digite sua extensão territorial: \n");
scanf("%f", &extensão);

printf("Digite o seu PIB: \n");
scanf("%f", &PIB);

printf("Digite quantos pontos turísticos tem: \n");
scanf("%d", &turisticos); 

printf("Carta 1: \n"); 
printf("Estado: %s\n", estado);
printf("Código da Carta: %s\n", codigo);
printf("Nome da cidade: %s\n", cidade);
printf("Densidade populacional: %d\n", povo);
printf("Área: %f\n", extensão);
printf("PIB: %f\n", PIB);
printf("Pontos turisticos: %d\n", turisticos);


printf("Digite a inicial do estado: \n");
scanf("%s", estado2);

printf("Digite o codigo da carta: \n");
scanf("%s", codigo2);

printf("Digite o nome da cidade: \n");
scanf("%s", cidade2); 

printf("Digite a população: \n");
scanf("%d", &povo2);

printf("Digite sua extensão territorial: \n");
scanf("%f", &extensão2);

printf("Digite o seu PIB: \n");
scanf("%f", &PIB2);

printf("Digite quantos pontos turísticos tem: \n");
scanf("%d", &turisticos2); 

printf("Carta 2: \n"); 
printf("Estado: %s\n", estado2);
printf("Código da Carta: %s\n", codigo2);
printf("Nome da cidade: %s\n", cidade2);
printf("Densidade populacional: %d\n", povo2);
printf("Área: %f\n", extensão2);
printf("PIB: %f\n", PIB2);
printf("Pontos turisticos: %d\n", turisticos2);



    return 0; 
}
