#include<stdio.h>

greet(){
	printf("Hello, Good Morning...\n\n");
}

greetName(char n[50]){
	
	printf("Hello %s, Good Morning...\n\n", n);
}

sum(int a, int b){
	
	int ans = a + b;
	printf("\n\nAns = %d", ans);
}

main(){
	
	greet();
	
	greetName("Utsav");
	
	sum(25,60);
}
