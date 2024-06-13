#include<stdio.h>

greet(){
	printf("Hello, Good Morning...\n\n"); // TNRN - Tech(Arguement) Nothing Return Nothing
}

greetName(char n[50]){
	
	printf("Hello %s, Good Morning...\n\n", n); // TSRN - Tech Something Return Nothing
}

int sum(int a, int b){
	
	return a + b; // TSRS - Tech Something Return Something
}

float pi(){
	
	return 3.14; // TNRS - Tech Nothing Return Something
}


main(){
	
	greet(); // TNRN - Tech(Arguement) Nothing Return Nothing
	
	greetName("Utsav"); // TSRN - Tech Something Return Nothing
	
	int total = sum(25,60); 
	printf("%d\n\n", total);   // TSRS - Tech Something Return Something
	
	float p = pi();
	printf("%.2f", p); // TNRS - Tech Nothing Return Something
}
