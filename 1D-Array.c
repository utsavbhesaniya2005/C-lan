#include<stdio.h>
main(){
	
	int i, size;
	
	printf("Enter the Size of array :- ");
	scanf("%d", &size);
	
	int array[size];
	
	
	for(i=0; i<size; i++){
		
		printf("Enter array[%d] element :- ", i);
		scanf("%d", &array[i]);		
	}
	
	for(i=0; i<size; i++){
		
		printf("Array[%d] Element is : %d\n", i, array[i]);
	}
	
	
	
//	How to find size of array
//	int array[] = {1,2,3,4,5,6,7,8,9,1,5,9,5,8,15,45};
//	
//	int size = sizeof(array) / sizeof(array[0]);
//	
//	printf("Size of Array : %d", size);
	
}