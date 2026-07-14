#include <stdio.h>

int main(){
	float a, b, c, d, e;
	
	printf("Numero [A]: ");
	scanf("%f", &a);
	printf("Numero [B]: ");
	scanf("%f", &b);
	printf("Numero [C]: ");
	scanf("%f", &c);
	printf("Numero [D]: ");
	scanf("%f", &d);
	printf("Numero [E]: ");
	scanf("%f", &e);
	
	if(e>d){
		if(d>c){
			if(c>b){
				if(b>a){
					printf("Los n%cmeros estan en orden creciente, y quedan en el siguiente orden: %.2f,%.2f,%.2f,%.2f,%.2f",163, a, b, c, c, d);
				}else{
					printf("Los n%cmeros no estan en orden creciente", 163);
				}
			}else{
				printf("Los n%cmeros no estan en orden creciente", 163);
			}
		}else{
			printf("Los n%cmeros no estan en orden creciente", 163);
		}
	}else{
		printf("Los n%cmeros no estan en orden creciente", 163);
	}
	
	return 0;
}
