
#include <stdio.h>

float contrato(float preco){  // Função para o contrato mensal

float valorf = preco * 30;  //os 30 dias do contrato 
float precof = valorf - (valorf * 0.15); //Desconto do produto
  
 return precof; 
}

int main(void) {

FILE *arquivo; //tipo do arqquivo
arquivo = fopen("historico.txt","a");
int saida=1, opcao, i=1;
float pproduto, preco, precof;
char fp[20];
  
while(saida!=0){

arquivo = fopen("historico.txt","a"); // Repetir o arquivo
  
i=1;
  
printf("\n");

printf("======= Início =======\n");  
printf("1. Realizar Pedido\n2. Histórico de Compras\n0. Sair\nEscolha a opção: ");
scanf("%d", &opcao);
printf("\n");

if(opcao!=0 && opcao!=1 && opcao!=2){
printf("Opção Ínvalida\n");
}
  
switch (opcao){

  
  case 1:
  //arquivo = fopen("historico.txt","a");
  printf("======= Opções de comidas =======\n");
  printf("1. Almoço\n2. Jantar\n3. Sobremesas\n4. Bebidas\n5. Lanches\n0. Sair\nEscolha a opção: ");
  scanf("%d", &opcao);
  printf("\n");
    switch (opcao){
  
      case  1:
      printf("======= Restaurantes: =======\n");
      printf("1. Restaurante do Galvão\n2. Casa da Maria\n3. Ponto do Almoço\n0. Sair\nEscolha a opção: ");
      scanf("%d", &opcao);
      printf("\n");
        switch (opcao){

        case  1:
        printf("======= Restaurante do Galvão =======\n");
        printf("1. Escondidinho de Charque - R$ 23,99\n2. Picanha - R$ 32,99\n3. Frango à Parmegiana - R$ 27,99\n0. Sair\nEscolha a opção: ");
        scanf("%d", &opcao);
        printf("\n");
          switch (opcao){

          case 1:
          printf("======= Pagamento =======\n");
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 23,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Escondidinho_de_Charque 23.99\n"); // Exibir no arquivo
            fclose(arquivo);
            }else{
            preco = 23.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");  
            fprintf(arquivo,"Escondidinho_de_Charque %0.2f\n", precof);
            fclose(arquivo);
            }
          break;
          
          case 2:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final:R$ 32,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Picanha 32.99\n");
            fclose(arquivo);  
            }else{
            preco = 32.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Picanha %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;

          case 3:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 27,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Frango_à_Parmegiana 32.99\n");
            fclose(arquivo);    
            }else{
            preco = 27.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");  
            fprintf(arquivo,"Frango_à_Parmegiana %0.2f\n", precof);
            fclose(arquivo);      
            }
          break;
          
          case  0:
          saida = 0;
          break;
          
          } 
        break;
          
        case  2:
        printf("======= Casa da Maria =======\n");
        printf("1. Arrumadinho - R$ 22,99\n2. Feijoada - R$ 18,99\n3. Lasanha - R$ 23,99\n0. Sair\nEscolha a opção: ");
        scanf("%d", &opcao);
        printf("\n");
          switch (opcao){

          case 1:
          printf("======= Pagamento =======\n");
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 22,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Arrumadinho 22.99\n");
            fclose(arquivo);
            }else{
            preco = 22.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Arrumadinho %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;
          
          case 2:
          printf("======= Pagamento =======\n");
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 18,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Feijoada 18.99\n");
            fclose(arquivo);
            }else{
            preco = 18.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");  
            fprintf(arquivo,"Feijoada %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;

          case 3:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 23,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Lasanha 23.99\n");
            fclose(arquivo);
            }else{
            preco = 23.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Lasanha %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;
          
          case  0:
          saida = 0;
          break;
          
          }
        break;
      
        case  3:
        printf("======= Ponto do Almoço =======\n");
          printf("1. Feijão Tropeiro - R$ 17,99\n2. Filé à Parmegiana - R$ 25,99\n3. Carne de Sol - R$ 23,99\n0. Sair\nEscolha a opção: ");
        scanf("%d", &opcao);
        printf("\n");
          switch (opcao){

          case 1:
          printf("======= Pagamento =======\n");
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 17,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Feijão_Tropeiro 17.99\n");
            fclose(arquivo);
            }else{
            preco = 17.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Feijão_Tropeiro %0.2f\n", precof);
            fclose(arquivo);   
            }
          break;
          
          case 2:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 25,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Filé à Parmegiana 25.99\n");
            fclose(arquivo);
            }else{
            preco = 25.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Filé_à_Parmegiana %0.2f\n", precof);
            fclose(arquivo);   
            }
          break;

          case 3:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 23,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Carne_de_Sol 23.99\n");
            fclose(arquivo);
            }else{
            preco = 23.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Carne_de_Sol %0.2f\n", precof);
            fclose(arquivo);     
            }
          break;
          
          case  0:
          saida = 0;
          break;
          
          }
        break;


        case  0:
        saida = 0;
        break;   
        }
        
      break;

      case  2:
      printf("======= Restaurantes: =======\n");
      printf("1. Lugar do Pernambucano\n2. Reteteu\n3. Cozinha Nordestina\n0. Sair\nEscolha a opção: ");
      scanf("%d", &opcao);
      printf("\n");
        switch (opcao){

        case  1:
        printf("======= Lugar do Pernambucano =======\n");
        printf("1. Cuscuz com Galinha Guisada - R$ 16,99\n2. Vaca Atolada - R$ 17,99\n3. Munguzá - R$ 15,99\n0. Sair\nEscolha a opção: ");
        scanf("%d", &opcao);
        printf("\n");
          switch (opcao){

          case 1:
          printf("======= Pagamento =======\n");
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 16,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Cuscuz_com_Galinha_Guisada 16.99\n");
            fclose(arquivo);
            }else{
            preco = 16.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Cuscuz_com_Galinha_Guisada %0.2f\n", precof);
            fclose(arquivo);    
            }
          break;
          
          case 2:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final:R$ 17,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Vaca_Atolada 17.99\n");
            fclose(arquivo);
            }else{
            preco = 17.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Vaca_Atolada %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;

          case 3:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 15,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Munguzá 15.99\n");
            fclose(arquivo);
            }else{
            preco = 15.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Munguzá %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;
          
          case  0:
          saida = 0;
          break;
          
          } 
        break;
          
        case  2:
        printf("======= Reteteu =======\n");
        printf("1. Macaxeira com Carne de Sol - R$ 18,99\n2. Cuscuz com Salsicha - R$ 16,99\n3. Batata doce com Frango - R$ 17,99\n0. Sair\nEscolha a opção: ");
        scanf("%d", &opcao);
        printf("\n");
          switch (opcao){

          case 1:
          printf("======= Pagamento =======\n");
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 18,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Macaxeira_com_Carne_de_Sol 18.99\n");
            fclose(arquivo);
            }else{
            preco = 18.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Macaxeira_com_Carne_de_Sol %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;
          
          case 2:
          printf("======= Pagamento =======\n");
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 16,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Cuscuz_com_Salsicha 16.99\n");
            fclose(arquivo);
            }else{
            preco = 16.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Cuscuz_com_Salsicha %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;

          case 3:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 17,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Batata_doce_com_Frango 17.99\n");
            fclose(arquivo);
            }else{
            preco = 17.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Batata_doce_com_Frango %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;
          
          case  0:
          saida = 0;
          break;
          
          }
        break;
      
        case  3:
        printf("======= Cozinha Nordestina =======\n");
          printf("1. Inhame com Carne de Sol - R$ 16,99\n2. Tapioca - R$ 8,99\n3. Sopa - R$ 12,99\n0. Sair\nEscolha a opção: ");
        scanf("%d", &opcao);
        printf("\n");
          switch (opcao){

          case 1:
          printf("======= Pagamento =======\n");
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 16,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Inhame_com_Carne_de_Sol 16.99\n");
            fclose(arquivo);
            }else{
            preco = 16.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Inhame_com_Carne_de_Sol %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;
          
          case 2:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 8,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Tapioca 8.99\n");
            fclose(arquivo);
            }else{
            preco = 8.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Tapioca %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;

          case 3:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 12,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Sopa 12.99\n");
            fclose(arquivo);
            }else{
            preco = 12.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Sopa %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;
          
          case  0:
          saida = 0;
          break;
          
          }
        break;


        case  0:
        saida = 0;
        break;   
        }
      break;
      
      case  3:
        printf("======= Restaurantes: =======\n");
      printf("1. Açaí da Selva\n2. Casa do Bolo\n3. Doces ou Travessuras\n0. Sair\nEscolha a opção: ");
      scanf("%d", &opcao);
      printf("\n");
        switch (opcao){

        case  1:
        printf("======= Açaí da Selva =======\n");
        printf("1. Açaí - R$ 11,99\n2. Sorvete - R$ 10,99\n3. Milk Shake - R$ 8,99\n0. Sair\nEscolha a opção: ");
        scanf("%d", &opcao);
        printf("\n");
          switch (opcao){

          case 1:
          printf("======= Pagamento =======\n");
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 11,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Açaí 11.99\n");
            fclose(arquivo);
            }else{
            preco = 11.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Açaí %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;
          
          case 2:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final:R$ 10,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Sorvete 10.99\n");
            fclose(arquivo);
            }else{
            preco = 10.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Sorvete %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;

          case 3:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 8,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Milk_Shake 8.99\n");
            fclose(arquivo);
            }else{
            preco = 8.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Milk_Shake %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;
          
          case  0:
          saida = 0;
          break;
          
          } 
        break;
          
        case  2:
        printf("======= Casa do Bolo =======\n");
        printf("1. Bolo Liso - R$ 10,99\n2. Bolo Recheado - R$ 15,99\n3. Pudim - R$ 6,99\n0. Sair\nEscolha a opção: ");
        scanf("%d", &opcao);
        printf("\n");
          switch (opcao){

          case 1:
          printf("======= Pagamento =======\n");
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 10,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Bolo_Liso 10.99\n");
            fclose(arquivo);
            }else{
            preco = 100.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Bolo_Liso %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;
          
          case 2:
          printf("======= Pagamento =======\n");
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 15,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Bolo_Recheado 15.99\n");
            fclose(arquivo);
            }else{
            preco = 15.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Bolo_Recheado %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;

          case 3:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 6,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Pudim 6.99\n");
            fclose(arquivo);
            }else{
            preco = 6.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Pudim %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;
          
          case  0:
          saida = 0;
          break;
          
          }
        break;
      
        case  3:
        printf("======= Doces ou Travessuras =======\n");
          printf("1. Pavê - R$ 9,99\n2. Brownie - R$ 7,99\n3. Torta - R$ 6,99\n0. Sair\nEscolha a opção: ");
        scanf("%d", &opcao);
        printf("\n");
          switch (opcao){

          case 1:
          printf("======= Pagamento =======\n");
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 9,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Pavê 9.99\n");
            fclose(arquivo);
            }else{
            preco = 9.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Pavê %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;
          
          case 2:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 7,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Brownie 7.99\n");
            fclose(arquivo);
            }else{
            preco = 7.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Brownie %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;

          case 3:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 6,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Torta 6.99\n");
            fclose(arquivo);
            }else{
            preco = 6.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Torta %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;
          
          case  0:
          saida = 0;
          break;
          
          }
        break;


        case  0:
        saida = 0;
        break;   
        }
      break;

      case  4:
        printf("======= Restaurantes: =======\n");
      printf("1. Barzinho do seu Zé\n2. Point Noturno\n3. Mercadinho\n0. Sair\nEscolha a opção: ");
      scanf("%d", &opcao);
      printf("\n");
        switch (opcao){

        case  1:
        printf("======= Barzinho do seu Zé =======\n");
        printf("1. Cerveja Latão 350ml - R$ 9,99\n2. Pitú 350ml - R$ 11,99\n3. Pinga 350ml - R$ 7,99\n0. Sair\nEscolha a opção: ");
        scanf("%d", &opcao);
        printf("\n");
          switch (opcao){

          case 1:
          printf("======= Pagamento =======\n");
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 9,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Cerveja_Latão_350ml 9.99\n");
            fclose(arquivo);
            }else{
            preco = 9.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Cerveja_Latão_350ml %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;
          
          case 2:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final:R$ 11,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Pitú_350ml 11.99\n");
            fclose(arquivo);
            }else{
            preco = 11.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Pitú_350ml %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;

          case 3:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 7,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Pinga_350ml 7.99\n");
            fclose(arquivo);
            }else{
            preco = 7.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Pinga_350ml %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;
          
          case  0:
          saida = 0;
          break;
          
          } 
        break;
          
        case  2:
        printf("======= Point Noturno =======\n");
        printf("1. Vodka 350ml - R$ 16,99\n2. Caipirinha 350ml - R$ 11,99\n3. Drinks 350ml - R$ 14,99\n0. Sair\nEscolha a opção: ");
        scanf("%d", &opcao);
        printf("\n");
          switch (opcao){

          case 1:
          printf("======= Pagamento =======\n");
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 16,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Vodka_350ml 16.99\n");
            fclose(arquivo);
            }else{
            preco = 16.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Vodka_350ml %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;
          
          case 2:
          printf("======= Pagamento =======\n");
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 11,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Caipirinha_350ml 11.99\n");
            fclose(arquivo);
            }else{
            preco = 11.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Caipirinha_350ml %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;

          case 3:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 14,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Drinks_350ml 14.99\n");
            fclose(arquivo);
            }else{
            preco = 14.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Drinks_350ml %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;
          
          case  0:
          saida = 0;
          break;
          
          }
        break;
      
        case  3:
        printf("======= Mercadinho =======\n");
          printf("1. Refrigerante 2L - R$ 8,99\n2. Suco 1L - R$ 6,99\n3. Limoneto 500ml - R$ 4,99\n0. Sair\nEscolha a opção: ");
        scanf("%d", &opcao);
        printf("\n");
          switch (opcao){

          case 1:
          printf("======= Pagamento =======\n");
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 8,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Refrigerante_2L 8.99\n");
            fclose(arquivo);
            }else{
            preco = 8.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Refrigerante_2L %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;
          
          case 2:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 6,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Suco_1L 6.99\n");
            fclose(arquivo);
            }else{
            preco = 6.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Suco_1L %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;

          case 3:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 4,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Limoneto_500ml 4.99\n");
            fclose(arquivo);
            }else{
            preco = 4.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Limoneto_500ml %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;
          
          case  0:
          saida = 0;
          break;
          
          }
        break;


        case  0:
        saida = 0;
        break;   
        }
      break;

      case 5:
        printf("======= Restaurantes: =======\n");
      printf("1. Pitija Lanches\n2. Tio Eddy Pizzas\n3. Lar do Hamburgão\n0. Sair\nEscolha a opção: ");
      scanf("%d", &opcao);
      printf("\n");
        switch (opcao){

        case  1:
        printf("======= Pitija Lanches =======\n");
        printf("1. Torta de Frango - R$ 5,99\n2. Coxinha - R$ 4,99\n3. Pastel - R$ 6,99\n0. Sair\nEscolha a opção: ");
        scanf("%d", &opcao);
        printf("\n");
          switch (opcao){

          case 1:
          printf("======= Pagamento =======\n");
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 5,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Torta_de_Frango 5.99\n");
            fclose(arquivo);
            }else{
            preco = 5.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Torta_de_Frango %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;
          
          case 2:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final:R$ 4,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Coxinha 4.99\n");
            fclose(arquivo);
            }else{
            preco = 4.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Coxinha %0.2f\n", precof);
            fclose(arquivo);    
            }
          break;

          case 3:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 6,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Pastel 6.99\n");
            fclose(arquivo);
            }else{
            preco = 6.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Pastel %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;
          
          case  0:
          saida = 0;
          break;
          
          } 
        break;
          
        case  2:
        printf("======= Tio Eddy Pizzas =======\n");
        printf("1. Pizza Média - R$ 28,99\n2. Pizza Grande - R$ 35,99\n3. Combo tradicional: 2 Pizzas Grandes + Refrigerante 1L - R$ 61,99\n0. Sair\nEscolha a opção: ");
        scanf("%d", &opcao);
        printf("\n");
          switch (opcao){

          case 1:
          printf("======= Pagamento =======\n");
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 28,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Pizza_Média 28.99\n");
            fclose(arquivo);
            }else{
            preco = 28.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Pizza_Média %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;
          
          case 2:
          printf("======= Pagamento =======\n");
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 35,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Pizza_Grande 35.99\n");
            fclose(arquivo);
            }else{
            preco = 35.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Pizza_Grande %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;

          case 3:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 61,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Pizzas_Grandes_+_Refrigerante_1L 61.99\n");
            fclose(arquivo);
            }else{
            preco = 61.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"Pizzas_Grandes_+_Refrigerante_1L %0.2f\n", precof);
            fclose(arquivo); 
            }
          break;
          
          case  0:
          saida = 0;
          break;
          
          }
        break;
      
        case  3:
        printf("======= Lar do Hamburgão =======\n");
          printf("1. X-Tudo - R$ 16,99\n2. X-Baccon - R$ 14,99\n3. X-Burguer - R$ 10,99\n0. Sair\nEscolha a opção: ");
        scanf("%d", &opcao);
        printf("\n");
          switch (opcao){

          case 1:
          printf("======= Pagamento =======\n");
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 16,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"X-Tudo 16.99\n");
            fclose(arquivo);
            }else{
            preco = 16.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"X-Tudo %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;
          
          case 2:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 14,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"X-Baccon 14.99\n");
            fclose(arquivo);
            }else{
            preco = 14.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"X-Baccon %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;

          case 3:
          printf("======= Pagamento =======\n");  
          printf("1. Unidade\n2. Contrato Mensal (com o contrato mensal, você ganha 15%% desconto)\nEscolha a opção: ");
          scanf("%d", &opcao);
          printf("\n");
            if(opcao == 1){
            printf("Valor Final: R$ 10,99\nForma de pagamento? ");
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"X-Burguer 10.99\n");
            fclose(arquivo);
            }else{
            preco = 10.99;
            precof = contrato(preco);
            printf("Valor Final: R$ %0.2f\nForma de pagamento? ", precof);
            scanf("%s", fp);
            printf("\nPedido Finalizado\n");
            fprintf(arquivo,"X-Burguer %0.2f\n", precof);
            fclose(arquivo);  
            }
          break;
          
          case  0:
          saida = 0;
          break;
          
          }
        break;


        case  0:
        saida = 0;
        break;   
        }
      break;

      
      case  0:
      saida = 0;
      break;


      
    }
  break;

  case 0:
  saida = 0;
  break;

float valor;
char produto[50];
  
  case 2:
  
  arquivo = fopen("historico.txt","r");
/*
  if(arquivo == NULL){
   printf("Hitórico de compras vazio\n")
  }
  */  
  int a=0;
   printf("======= Histórico de Compras =======\n\n");
   while(fscanf(arquivo, "%s %f", produto, &valor)!=EOF){ //procurar os dados do arquivo, enquanto ele n chegar ao fim
     a++;     
     printf("%dª compra: %s - R$ %0.2f\n", i, produto, valor);
     i++;
   
   }
   if(a==0){
    printf("HISTÓRICO DE COMPRAS VAZIO\n");
   }
   a=0;

    
  break;

  
}
    
}    
  return 0;
}
