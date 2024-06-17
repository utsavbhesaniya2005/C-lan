#include<stdio.h>
main(){
	
	int x = 10;
	int y = 20;
	
	int *ptr = &x;
	int *ptr2 = &y;
	
	// If You Want Pointer Of Pointer
	int **dblptr = &ptr;	 
	
	printf("Address of X :- %u\n", ptr); // %u To Take Only Positive Address
	printf("Value of Pointer :- %d\n", *ptr); //To Store Value Of Pointer
	
	printf("Address of Y :- %u\n", ptr2); // %u To Take Only Positive Address
	printf("Value of Pointer :- %d\n", *ptr2); //To Store Value Of Pointer
	
	printf("Address of ptr :- %u\n", dblptr); // %u To Take Only Positive Address
	
	int arr[] = {10,20,30,40,50};
	
	int *parr = &arr;
	
	printf("Address of Arr[0] :- %u\n", parr); // It Only Print First Position Of Array
	printf("Value of Pointer :- %d\n", *parr);
	
//	If you Want To Print Second Position Of Array Use These
	parr++;
	
	printf("Address of Arr[0] :- %u\n", parr);
	printf("Value of Pointer :- %d\n", *parr);
	
}
