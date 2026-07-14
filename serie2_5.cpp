#include <stdio.h>

int main(){
	int hora, minuto, segundo;
	
	printf("Digite la hora: ");
	scanf("%i", &hora);
	printf("Digite los minutos: ");
	scanf("%i", &minuto);
	printf("Digite los segundos: ");
	scanf("%i", &segundo);
	
	if(hora>23 || hora<0){
		printf("\nERROR, valor no valido, por favor digite una hora entre las 00:00 y las 23:00");
		while(hora>23 || hora<0){
			printf("\nDigite la hora: ");
			scanf("%i", &hora);
		};
	}
	
	if(minuto>59 || minuto<0){
		printf("\nERROR, valor no valido, por favor digite minutos entre los 0 y 59 minutos");
		while(minuto>59 || minuto<0){
			printf("\nDigite los minutos: ");
			scanf("%i", &minuto);
		};
	}
	
	if(segundo>59 || segundo<0){
		printf("\nERROR, valor no valido, por favor digite segundos entre los 0 y 59 segundos");
		while(segundo>59 || segundo<0){
			printf("\nDigite los segundos: ");
			scanf("%i", &segundo);
		};
	}
	
	printf("\n\nLa hora ingresada es: %02i:%02i:%02i", hora, minuto, segundo);
	
	segundo += 1;
	
	if(segundo>59){
		minuto+=1;
		segundo=0;
	}
	
	if(minuto>59){
		hora += 1;
		minuto=0;	
	}
	
	if(hora>23){
		hora=0;
		minuto=0;
		segundo=0;
	}
	
	printf("\nLa hora modificada es: %02i:%02i:%02i", hora, minuto, segundo);
	return 0;
}