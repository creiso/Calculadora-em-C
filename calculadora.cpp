#include <stdio.h>
#include <locale.h>

int opcao=0, valor1,valor2, contador;
float total;


int main (){
	setlocale (LC_ALL, "Portuguese");
	printf("bem vindo a calculadora digite o numero da op�a� desejada:\n");
	printf("\n ==================");
	printf("\n|1-Adi��o          |");
	printf("\n|2-Subtra��o       |");
	printf("\n|3-Multiplica��o   |");
	printf("\n|4-Divis�o         |");
	printf("\n|0-Sair            |");
	printf("\n ================== \n");
	
	scanf("%d", &opcao);
	
			
	while(opcao <0 || opcao >4){
	printf("invalido leia novamente");
	scanf("%d", &opcao);
	}
	switch (opcao)
	{	case 1:
			printf("Voc� escolheu adi��o");
			printf("\nDigite seu primeiro numero: ");
			scanf("%d",&valor1);
			printf("Digite o segundo numero: ");
			scanf ("%d",&valor2);
			valor1 =valor1 +  valor2;
			printf("O resultado � %d",valor1);
		break;
		
		case 2:
			printf("Voc� escolheu Subtra��o");
			printf("\nDigite seu primeiro numero: ");
			scanf("%d",&valor1);
			printf("Digite o segundo numero:");
			scanf ("%d",&valor2);
			valor1 = valor1 -  valor2;
			printf("O resultado � %d",valor1);
		break;
		
		case 3:
			printf("Voc� escolheu Multiplica��o");
			printf("\nDigite seu primeiro numero: ");
			scanf("%d",&valor1);
			printf("Digite o segundo numero:");
			scanf ("%d",&valor2);
			valor1 = valor1 *  valor2;
			printf("O resultado � %d",valor1);
		break;
		
		case 4:
			printf("Voc� escolheu divis�o");
			printf("\nDigite seu primeiro numero: ");
			scanf("%d",&valor1);
			while (valor1==0){
				printf("\nInvadido.Digite seu numero novamente : \n");
				scanf ("%d",&valor1);
			}
			
			printf("Digite o segundo numero:");
			scanf ("%d",&valor2);
			while (valor2 ==0){
			
			printf("\nInvadido. Digite seu numero novamente: \n");
			scanf ("%d",&valor2);
			}
		
			total = (float)valor1 /  valor2;
			printf("O resultado � %.2f",total);
		break;
		case 0:
			printf("Op��o sair");
		break;
		
		
		 
	
	}

	
	
	return 0;
}
