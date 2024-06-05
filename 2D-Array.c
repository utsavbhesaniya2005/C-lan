#include<stdio.h>
main(){
	
	int i, j;
	
	int array2d[3][3] = {
							{1,2,3},
							{4,5,6},
							{7,8,9}
						};
			
	for(i=0; i<3; i++){
		
		for(j=0; j<3; j++){
			
			printf("Array[%d][%d] element is :- %d\n", i, j, array2d[i][j]);
		}
		
		printf("\n");
	}	
		
//	for(i=0; i<3; i++){
//		
//		for(j=0; j<3; j++){
//			
//			printf("%d",array2d[i][j]);
//		}
//		
//		printf("\n");
//	}			
	
}