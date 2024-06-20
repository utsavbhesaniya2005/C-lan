#include<stdio.h>
#include<stdlib.h>

main(){
	
	FILE* fptr;
	
	char dataToBeRead[250];
	
	fptr = fopen("../demo.txt", "w");
		
	fputs("How are You?", fptr);
	
	fclose(fptr);
	
	fptr = fopen("../demo.txt", "r");	
	
	// Closing the file using fclose()

	
	while (fgets(dataToBeRead, 50, fptr)
	       != NULL) {
	
	    // Print the dataToBeRead
	    printf("%s", dataToBeRead);
	}
	
	fclose(fptr);
	
}