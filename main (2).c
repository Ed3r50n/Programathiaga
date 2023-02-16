#include <stdio.h>
#include <stdlib.h>
int main(){

    
    int OpcaoDeCompra;
    int quantidade;
    float total;
    
    printf("Escolha uma opcao: \n1 - A vista\n2 - Prazo\n");
    scanf("%i", &OpcaoDeCompra);

    while (OpcaoDeCompra != 1 && OpcaoDeCompra != 2){
    printf("Escolha uma opcao: \n1 - A vista\n2 - Prazo\n");
    scanf("%i", &OpcaoDeCompra);

    system("clear");
    
    }
    
   switch(OpcaoDeCompra){
       
      case 1:
      printf("Informe a quantidade de produtos: ");
    scanf("%i", &quantidade);

    system("clear");
    
      if ( quantidade == 1){
      printf("Seu produto custara R$ 79.00");
      }
      else{
         while (quantidade > 1){
       	total = (79 + 79.00 * quantidade) - (79.00 * quantidade * 0.05);
       	printf("O valor total da compra e: 2R$ %.2f ", total);
       	break;
	   } 
      } 
     break;
     
      case 2:
      printf("Informe a quantidade de produtos: ");
    scanf("%i", &quantidade);

    system("clear");
    
      if ( quantidade == 1){
      printf("Seu produto custara R$ 90.00");
      }
      else{
         while (quantidade > 1){
       	total = (90.00 * quantidade);
       	printf("O valor total da compra e: R$ %.2f ", total);
       	break;
	   } 
      } 
     break;
     default:
     printf("Erro na compra");
   }
   return 10;
}
