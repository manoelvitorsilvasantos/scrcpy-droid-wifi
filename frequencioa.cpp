#include<stdio.h>
#include <inttypes.h>


typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t u8;

//const double res = 31.152647975077883;
const double res = 2.6246719160104988;

int main(void){
	
	float r = 1000/381;
	
	
	float freq;
	int i = 700, contador = 0;
	for(i = 700; i < 1081; i++){
		
		freq = (float) i;
		printf("Frequencia = %f\n", freq /10);
		contador++;
	}
	
	printf("\n\ncontador = %d\n", contador);
	printf("resistencia = %.f\n", r);
	
	int frequencia = 760;
	int resistencia = 0;
	for(i=0; i < 320; i++){
		if(frequencia >= 760 && frequencia <= 1081){
			freq = (float) frequencia;
			printf("Frequencia = %.2f - Resistencia = %f\n", (freq/10), resistencia);
			frequencia ++;
			resistencia = resistencia + res;
		}
	}
	
	return 0;
}