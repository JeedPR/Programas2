#include <stdio.h>

int main(){
	int op; 
	float dinero, dineroC;
	
	printf("\t\t\t ====Conversi%cn de moneda==== \n", 162);
	printf("1.- USD a MXN\n2.- MXN a USD\n3.- MXN a EUR\n4.- EUR a MXN\n5.- USD a EUR\n6.- EUR a USD\nDigite la opci%cn de conversi%cn: ",162, 162);
	scanf("%i", &op);
	
	printf("\n\n");
	
	switch(op){
		case 1: 
			printf("Digite la cantidad de dolares a convertir: %c", 36);
			scanf("%f", &dinero);
			
			dineroC = dinero * 21;
			
			printf("\n\n%c%.2f USD son %c%.2f MXN", 36, dinero, 36, dineroC);
		break;
		
		case 2: 
			printf("Digite la cantidad de pesos a convertir: %c", 36);
			scanf("%f", &dinero);
			
			dineroC = dinero * 0.048;
			
			printf("\n\n%c%.2f MXN son %c%.2f USD", 36, dinero, 36, dineroC);
		break;
		
		case 3:
			printf("Digite la cantidad de pesos a convertir: %c", 36);
			scanf("%f", &dinero); 
			
			dineroC = dinero * 0.042;
			
			printf("\n\n%c%.2f MXN son %c%.2f EUR", 36, dinero, 36, dineroC);
		break;
		
		case 4: 
			printf("Digite la cantidad de euros a convertir: ");
			scanf("%f", &dinero);
			
			dineroC = dinero * 23.62;
			
			printf("\n\n%c%.2f EUR son %c%.2f MXN", 36, dinero, 36, dineroC);
		break;
		
		case 5: 
			printf("Digite la cantidad de dolares a convertir: %c", 36);
			scanf("%f", &dinero);
			
			dineroC = dinero * 0.89;
			
			printf("\n\n%c%.2f USD son %c%.2f EUR", 36, dinero, 36, dineroC);
		break;
		
		case 6: 
			printf("Digite la cantidad de euros a convertir: ");
			scanf("%f", &dinero);
			
			dineroC = dinero * 1.12;
			
			printf("\n\n%c%.2f EUR son %c%.2f USD", 36, dinero, 36, dineroC);
		break;
		
		default:
			printf("\nERROR, el valor que ingreso no es valido"); 
		break; 
	}
	
	return 0;
}
