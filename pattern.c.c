#include<stdio.h>
main(){
	
	int i, j, k;
	
	for(i=1; i<=5; i++){
		
		for(k=1; k<6-i; k++){
			printf(" ");
		}
		
		for(j=1; j<=i; j++){
			printf("%d", j);
		}
		
		
		for(j=1; j<=i; j++){
			
			if(j==1){
				continue;
			}
			printf("%d", j);
		}
		
		printf("\n");
	} 
	
	for(i=5; i>=1; i--){
		if(i==5){
			continue;
		}
		
		for(k=1; k<6-i; k++){
			printf(" ");
		}
		
		for(j=1; j<=i; j++){
			printf("%d", j);
		}
		
		
		for(j=1; j<=i; j++){
			
			if(j==1){
				continue;
			}
			printf("%d", j);
		}
		
		printf("\n");
	} 
}