#include<stdio.h>

void inc(int *p){
	
//	printf("P = %u\n", p);
//	printf("P = %u\n", *p+1);
//	printf("P = %u\n", *p);
//	printf("P = %u\n", *(p+1));

	int i;

	for(i=0;i<4;i++){
		
		printf("arr[%d] = %d\n", i, *(p+i));
	}
	
}

main(){
	
	int arr[] = {21,65,85,45};
	
//	int a = 10;
//	int *ptr = &a;
//	int **ptr2 = &ptr;
//	int ***ptr3 = &ptr2;
//	
//	printf("Pointer 1 Location :- %u\n", ptr);
//	printf("Value Of Pointer 1 :- %d\n", *ptr);
//	
//	printf("Pointer 2 Location :- %u\n", ptr2);
//	printf("Value Of Pointer 2 :- %d\n", **ptr2);
//	
//	printf("Pointer 3 Location :- %u\n", ptr3);
//	printf("Value Of Pointer 3 :- %d\n", ***ptr3);
	
	inc(arr);
}
