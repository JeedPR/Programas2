#include <stdio.h>
#include <math.h>

int main(){
	int p=1000,n=10;
	float r=0.05, a=0;
	
	printf("Una cuenta de ahorro invierte %c1000 en una cuenta de ahorro con el 5%c de inter%cs anual, durante 10 a%cos.\nEl monto acumulado es: \n",36, 37,130,164);
	
	for(int i=1;i<=n;i++){
		a  = p*(pow((1+r),i));
		
		printf("\nA%co [%i]: %c%.4f\n",164, i, 36, a);
	}
	
	return 0;
}