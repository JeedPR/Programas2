#include <stdio.h>

int main(){
	float a,b,c;
	
	printf("Numero [A]: ");
	scanf("%f", &a);
	printf("Numero [B]: ");
	scanf("%f", &b);
	printf("Numero [C]: ");
	scanf("%f", &c);
	
	if((a==b) && (b==c)){
		printf("\nERROR, los 3 numeros son iguales, debe de ingresar numeros distintos\n");
		
		do{
			printf("Numero [A]: ");
			scanf("%f", &a);
			printf("Numero [B]: ");
			scanf("%f", &b);
			printf("Numero [C]: ");
			scanf("%f", &c);
			
			printf("\n");
		}while ((a==b) && (b==c));
	}
	
	if(a==b){
		printf("\nERROR, el numero A y B son iguales, debe de ingresar numeros distintos\n");
		do{
			printf("Numero [A]: ");
			scanf("%f", &a);
			printf("Numero [B]: ");
			scanf("%f", &b);
			
			printf("\n");
		}while (a==b);
	}else if(a==c){
		printf("\nERROR, el numero A y C son iguales, debe de ingresar numeros distintos\n");
		do{
			printf("Numero [A]: ");
			scanf("%f", &a);
			printf("Numero [C]: ");
			scanf("%f", &c);
			
			printf("\n");
		}while(a==c);
	}else if(b==c){
		printf("\nERROR, el numero B y C son iguales, debe de ingresar numeros distintos\n");
		do{
			printf("Numero [B]: ");
			scanf("%f", &b);
			printf("Numero [C]: ");
			scanf("%f", &c);
			
			printf("\n");
		}while (b==c);
	}
	
	if((a>b) && (a>c)){
		printf("El número A es el mayor, su valor es: %.2f", a);
	}else if((a<b) && (b>c)){
		printf("El número B es el mayor, su valor es: %.2f", b);
	}else{
		printf("El número C es el mayor, su valor es: %.2f", c);
	}
	
	
	return 0;
}