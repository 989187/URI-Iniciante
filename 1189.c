#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	double m[12][12], soma=0, media=0;
	int i, j, cont=0, cont1=0, cont2=1;
	char o;
	
	scanf("%c", &o);
	
	for(i = 0; i < 12; i ++){
		for(j = 0; j < 12; j ++){
			scanf("%lf", &m[i][j]);
		}
	}
	
	if(o == 'S'){
		for(i = 1; i < 11; i ++){
			for(j = cont1; j < cont2; j ++){
				soma += m[i][j];
			}
			if(i == 5){
				continue;
			}else if(i >= 6){
				cont2 --;
			}else{
				cont2 ++;
			}
		}
		printf("%.1lf\n", soma);
	}else if(o == 'M'){
		for(i = 1; i < 11; i ++){
			for(j = cont1; j < cont2; j ++){
				media += m[i][j];
				cont ++;
			}
			if(i == 5){
				continue;
			}else if(i >= 6){
				cont2 --;
			}else{
				cont2 ++;
			}
		}
		media /= cont;
		printf("%.1lf\n", media);
	}
	
	return 0;
}
