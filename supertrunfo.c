#include <stdio.h>

int main()
{
      //carta 01
      float popu;
      char estado[50];
      char codigo[50];
      char cidade[50];
      double area;
      float pib;
      int pturistico;

         // CARTA 2
    
    char estado2[50];
    char codigo2[10];
    char cidade2[50];
    float populacao2;
    double area2;
    float pib2;
    int pturistico2;

      // apresentacao do jogo ao usuario

      printf("Bem vindo ao super trunfo!!!\n");
      printf("Neste jogo voce tera de escolher as caracteristicas das cartas para comparar qual a mais forte!\n");
      printf("Neste jogo vc ira escolher as caracteristicas das cartas e depois compara-las o tema do jogo e Paises!\n");
      printf("Vamos comecar !!!\n");

      // selecao das cartas

      // carta 01
      //codigo para interagir com o usuario e definir as caracteristicas 

      printf("---carta 01---\n");
      printf("escolha o estado: ");
      scanf("%s", &estado);

      printf("escolha o codigo de 01 a 04: ");
      scanf("%s", &codigo);

      printf("nome da cidade: ");
      scanf("%s", &cidade);

      printf("tamanho em area km: ");
      scanf("%lf",&area);

      printf("o pib da cidade: ");
      scanf("%f", &pib);

      printf("numero de pontos turisticos: ");
      scanf("%d", &pturistico);

      printf("qual a populacao : ");
      scanf("%f", &popu);

      // caracteristicas da carta 01 escolhidas agora vemos a forma de apresenta-las
      //codigo que mostra os dados escolhidos 

      printf("---CARTA 01--- \n ");

      printf("ESTADO: %s \n", estado );
      printf("CODIGO: %s \n", codigo);
      printf("CIDADE: %s \n",cidade);
      printf("AREA: %lf \n",area);
      printf("PIB: %f \n",pib);
      printf("PONTO TURISTICO: %d \n", pturistico);
      printf("POPULACAO: %f \n", popu);

      //repeticao do processo para a carta 02

      printf("Agora vc deve escolher as caracteristicas da carta 02.Lembrando que as caracteristicas devem ser diferentes das escritas na carta 01\n");

      printf("---Carta 02--- \n");

      printf("escolha o estado: ");
      scanf("%s", &estado2);

      printf("escolha o codigo de 01 a 04: ");
      scanf("%s", &codigo2);

      printf("nome da cidade: ");
      scanf("%s", &cidade2);

      printf("tamanho em area km: ");
      scanf("%lf",&area2);

      printf("o pib da cidade: ");
      scanf("%f", &pib2);

      printf("numero de pontos turisticos: ");
      scanf("%d", &pturistico2);

      printf("qual a populacao : ");
      scanf("%f", &populacao2);

      //Dados Escolhidos sendo apresentados

      printf("---CARTA 02--- \n ");

      printf("ESTADO: %s \n", estado2 );
      printf("CODIGO: %s \n", codigo2);
      printf("CIDADE: %s \n",cidade2);
      printf("AREA: %lf \n",area2);
      printf("PIB: %f \n",pib2);
      printf("PONTO TURISTICO: %d \n", pturistico2);
      printf("POPULACAO: %f \n", populacao2);

      printf("variavel teste");
      


}