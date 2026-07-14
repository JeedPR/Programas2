#include <stdio.h>

int main(){
	float a,b,c,d;
	
	printf("Numero [A]: ");
	scanf("%f", &a);
	printf("Numero [B]: ");
	scanf("%f", &b);
	printf("Numero [C]: ");
	scanf("%f", &c);
	printf("Numero [D]: ");
	scanf("%f", &d);
	
	if(((a!=b) && (b!=c) && (c!=d)) && ((b!=a) && (b!=c) && (b!=d)) && ((c!=a) && (c!=b) && (c!=d)) && (d!=a) && (d!=b) && (d!=c)){
		if(a<b){
			if(a<c){
				if(a<d){
					printf("El número A es el menor, su valor es: %.2f", a);
				}else{
					printf("El número D es el menor, su valor es: %.2f", d);
				}
			}else{
				printf("El número C es el menor, su valor es: %.2f", c);
			}	
		}else if(b<c){
			if(b<d){
				printf("El número B es el menor, su valor es: %.2f", b);
			}else{
				printf("El número D es el menor, su valor es: %.2f", d);
			}
		}else if(c<d){
			printf("El número C es el menor, su valor es: %.2f", c);
		}else{
			printf("El número D es el menor, su valor es: %.2f", d);
		}
	}else{
		if(a==b){
			if(b==c){
				if(c==d){
					printf("Los numeros A, B, C y D son iguales, con su valor: %.2f", a);
				}else if(a==b && a==c && b==c && a<d){
					printf("Los números A, B y C son iguales, y son los menores con su valor %.2f", a);
				}
			}else if(b==d && a<c){
				printf("Los números A, B y D son iguales, y son los menores con su valor %.2f", a);
			}else if(a==b && a<c && a<d){
				printf("Los números A y B son iguales, y son los menores con su valor %.2f", a);
			}
		}else if(b==c){
			if(c==d && b<a){
				printf("Los números B, C y D son iguales, y son los menores con su valor es: %.2f", b);
			}else if(b==c && b<a && c<d){
				printf("Los números B y C son iguales, y son los menores con su valor: %.2f", b);
			}
		}else if(c==d && c<a && d<b){
			printf("Los números C y D son iguales, y son los menores con su valor: %.2f", c);
		}else if(a==c){
			if(c==d && a<b){
				printf("Los números A, C y D son iguales, y son los menores con su valor: %.2f", a);
			}else if(a==c && a<b && c<d ){
				printf("Los números A y C son iguales, y son los menores con su valor: %.2f", a);
			}
		}
		
		if(b==d && b<a && d<c){
			printf("Los números B y D son iguales, y son los menores con su valor: %.2f", b);
		}
		
		if(a==d && a<b && d<c){
			printf("Los números A y D son iguales, y son los menores con su valor: %.2f", a);
		}		
	}
	return 0;
}