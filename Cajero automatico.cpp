#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main (){
	
	int pin,choice;
	float amount=150000,withdraw,deposit;
	char retry='s';
	
	
	system("color F");
	while (pin != 2002){
		printf("\n\tIngrese su pin: ");
		scanf("%i",&pin);
		if (pin != 2002){
			system("color C");
			printf("\n\tPin erroneo, por favor vuelva a intentarlo: ");
		}
	}
	
	system("color A");
	printf("\n\tContraseña correcta");
	printf("\n\tIngresando al cajero....\n\t");
	system("pause");
	system("cls");
	
	
	system("color B");
	do{
	printf("\n\t----------------------------------");
	printf("\n\tBIENVENIDO AL CAJERO BDV");
	printf("\n\n\t1)Verificar saldo ");
	printf("\n\n\t2)Retirar saldo ");
	printf("\n\n\t3)Depositar saldo ");
	printf("\n\n\t4)Salir ");
	
	printf("\n\n\tIngrese su eleccion: ");
	scanf("%i",&choice);
	system("cls");
	
	switch(choice){
		case 1: printf("\n\n\tSu saldo actual es de: %.2f Bs.S",amount);
		if(amount == 0){
			printf("\n\n\tSaldo insuficiente");
		}
		break;
		case 2: printf("\n\n\tCual es el monto que desea retirar: ");
				scanf("%f",&withdraw);
		if(withdraw < amount){
			amount -= withdraw;
			printf("\n\n\tProcesando su dinero en efectivo...");
			printf("\n\n\tRetire su dinero");
			printf("\n\n\tSu saldo actual es de: %.2f Bs.S",amount);
						
		} 
			else{
				printf("\n\n\tSaldo insuficiente");
			}
			break;
		case 3: printf("\n\n\tCual es el monto que desea depositar: ");
				scanf("%f",&deposit);
				printf("\n\n\tSu saldo anterior es de: %.2f Bs.S",amount);
				amount += deposit;
				printf("\n\n\tSu saldo nuevo saldo es de: %.2f Bs.S",amount);	
				break;
				
		case 4: printf("\n\n\tGracias por usar el cajero automatico!");
				break;		
	
		default: printf("\n\n\tEleccion invalida. Por favor, vuelva a intentarlo");

	}	
		printf("\n\n\tDesea intentarlo de nuevo (s/n): ");
		fflush(stdin);
		scanf("%c",&retry);	
	

	
		} while(retry == 's' || retry == 'S');
		
	system("color D");
	printf("\n\n\tGracias por utilizar el servicio del cajero automatico =). ");
	printf("\n\n\tPDST: AUNQUE SEA UNA MRD DE BANCO!");
	
	
	
	
	getch();
	return 0;
}
