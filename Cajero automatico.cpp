//Incluir librerias
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Funcion principal
int main (){
	
	//Declaracion de variables
	int pin,choice;
	float amount=150000,withdraw,deposit;
	char retry='s';
	
	//Cambio de color
	system("color F");
	//Ciclo para ingresar al programa
	while (pin != 2002){
		printf("\n\tIngrese su pin: ");
		scanf("%i",&pin);
		if (pin != 2002){
			system("color C");
			printf("\n\tPin erroneo, por favor vuelva a intentarlo: ");
		}
	}
	
	//Ingresando al programa
	system("color A");
	printf("\n\tContraseña correcta");
	printf("\n\tIngresando al cajero....\n\t");
	system("pause");
	system("cls");
	
	
	system("color B");
	//Inicio ciclo do-while
	do{
	//Menu
	printf("\n\t----------------------------------");
	printf("\n\tBIENVENIDO AL CAJERO BDV");
	printf("\n\n\t1)Verificar saldo ");
	printf("\n\n\t2)Retirar saldo ");
	printf("\n\n\t3)Depositar saldo ");
	printf("\n\n\t4)Salir ");
	
	printf("\n\n\tIngrese su eleccion: ");
	scanf("%i",&choice);
	system("cls");
	
	//Switch para guardar opción
	switch(choice){
		//Verificar saldo
		case 1: printf("\n\n\tSu saldo actual es de: %.2f Bs.S",amount);
		if(amount == 0){
			printf("\n\n\tSaldo insuficiente");
		}
		break;
		//Retirar saldo
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
		//Depositar saldo
		case 3: printf("\n\n\tCual es el monto que desea depositar: ");
				scanf("%f",&deposit);
				printf("\n\n\tSu saldo anterior es de: %.2f Bs.S",amount);
				amount += deposit;
				printf("\n\n\tSu saldo nuevo saldo es de: %.2f Bs.S",amount);	
				break;
		//Salir del cajero		
		case 4: printf("\n\n\tGracias por usar el cajero automatico!");
				break;		
		//Numero ingresado no valido
		default: printf("\n\n\tEleccion invalida. Por favor, vuelva a intentarlo");

	}	
		//Para volver a iniciar el programa con el do-while
		printf("\n\n\tDesea intentarlo de nuevo (s/n): ");
		fflush(stdin);
		scanf("%c",&retry);	
	

	
		} while(retry == 's' || retry == 'S');
	
	//Mensaje de despedida
	system("color D");
	printf("\n\n\tGracias por utilizar el servicio del cajero automatico =). ");
	
	
	
	
	//Fin de programa
	getch();
	return 0;
}
