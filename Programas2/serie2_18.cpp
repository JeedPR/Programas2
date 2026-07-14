#include <stdio.h>

int main(void){
	int dia, tarifa=0, t, horas, sueldo=0; 
	
	printf("\t\t ----Sueldo de fabrica---- \n");
	
	printf("\t --Turno--\n");
	printf("1.- Diurno\n2.- Nocturno\n");
	printf("En que turno trabajo? - ");
	scanf("%i", &t);
	
	if(t>2 || t<1){
		printf("\nERROR, valor no valido, vuelva a digitarlo");
		while(t<1 || t>2){
			printf("\nEn que turno trabajo? - ");
			scanf("%i", &t);
		};
	}
	
	printf("\n\t --Dia--\n");
	printf("1.- Lunes\n2.- Martes\n3.- Miercoles\n4.- Jueves\n5.- Viernes\n6.- Sabado\n7.- Domingo\n");
	printf("Que dia de la semana trabajaste? - ");
	scanf("%i", &dia);
	
	if(dia>7 || dia<1){
		printf("\nERROR, valor no valido, vuelva a digitarlo");
		while(dia<1 || dia>7){
			printf("\nQue dia de la semana trabajaste? - ");
			scanf("%i", &dia);
		};
	}
	
	if(t==1){
		if(dia>0 && dia<7){
			tarifa = 5;
		}else if(dia==7){
			tarifa = 7;
		}
	}else if(t==2){
		if(dia>0 && dia<7){
			tarifa = 8;
		}else if(dia==7){
			tarifa = 11;
		}
	}
	
	
	printf("\n\t -- Horas--");
	printf("\nDigite las horas trabajadas: ");
	scanf("%i", &horas);
	
		if(horas<1){
		printf("\nERROR, valor no valido, vuelva a digitarlo");
		while(horas<1){
			printf("\nDigite las horas trabajadas: ");
			scanf("%i", &horas);
		};
	}
	
	sueldo = tarifa*horas;
	
	printf("\n\nEl sueldo sera de: %c%i", 36, sueldo);
	
	return 0;
}