#include <stdio.h>

int main(){
	float calificacion, promedio=0, suma=0;
	int cont=0;
	
	do{
		printf("Digite la calificacion: ");
		scanf("%f", &calificacion);
		printf("\n");
		
		if(calificacion!=-1){
			suma+= calificacion;
			cont+=1;
		}
	}while(calificacion!=-1);
	
	promedio = suma/cont;
	
	printf("El promedio de los alumnos es: %.2f", promedio);
	
	return 0;
}