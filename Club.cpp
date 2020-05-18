/*
Se ingresa la edad y el sexo (f=femenino – m=masculino) de 10 socios de
un club. Se pide informar:
a) Porcentaje de socios de sexo masculinos.
b) Cantidad de socios de sexo femenino.
c) Sabiendo que los socios son “Mayores” cuando la edad es mayor o igual a 21
años. “Juveniles”, cuando la edad es menor de 21 y mayor o igual a 16 años.
Son “Cadetes” cuando la edad es menor de 16 y mayor o igual a 12 años.
Informar: Cantidad de socios “Mayores”, “Juveniles” y “Cadetes”.
*/

#include <stdio.h>
#include <conio.h>

int main(){
	
	int i;
	float CantCad,CantJuv,CantMay,CantMujeres,nMujeres,xEdad,nHombres,xPorc,xSexo,xPorc1;
	
	//Inicio Ciclo 'for' para las 10 personas
	for(i=1;i<=10;i++){
	
		//Solicitar datos
		printf("Ingrese el sexo (f=1/m=2): ");
		scanf("%f",&xSexo);
		fflush(stdin);
		printf("\nIngrese su edad: ");
		scanf("%f",&xEdad);
		
		//Verificando los numeros de hombres
		if(xSexo == 2 ){
			//Asignado el numeros de hombres a la variable 'nHombres'
			nHombres+=xSexo;	
		}
		//Verificando los numeros de mujeres
		else if(xSexo == 1){
			//Asignado el numeros de hombres a la variable 'CantMujeres', directamente
			nMujeres+=xSexo;
			CantMujeres=nMujeres;		
		}
		//Condicionales para edad
		if(xEdad >= 21){
			//Conteo de personas 'Mayores'
			CantMay+=1;
		}
		else if(xEdad >= 16 && xEdad < 21){
			//Conteo de personas 'Juveniles'
			CantJuv+=1;
		}
		else if(xEdad >= 12 && xEdad < 16){
			//Conteo de personas 'Cadetes'
			CantCad+=1;	
		}
	}
	//Final del ciclo for
	
	
	//Imprimir valores
	printf("La cantidad de Mayores son: %.0f \nLa cantidad de Juveniles son: %.0f \nLa cantidad de Cadetes son: %.0f",CantMay,CantJuv,CantCad);
	
	//Dividir entre 2 ya que la variable 'nHombres' suma valores de 2 en 2, con la finalidad de saber la cantidad de hombres
	xPorc = nHombres / 2;
	//Porcentaje de hombres
	xPorc1 = (xPorc * 100) / 10;
	
	//Imprimir valores
	printf("\nporcentaje de hombres %:%.2f ",xPorc1);
	printf("\ncantidad de mujeres: %.f",CantMujeres);
	
	
	getch();
	return 0;

}
 

