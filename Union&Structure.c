#include<stdio.h>
//#include<string.h>

struct str1{
	
	int id;
	char name[50];
	int age;
	
};

union un1{
	
//	char name[50];
	float per;
	int total;
	
};

main(){
	
	struct str1 user1 = {101, "Harsh", 20};
	
	printf("User1 Id :- %d\nUser1 Name :- %s\nUser1 Age :- %d\n", user1.id, user1.name, user1.age);
	
	union un1 result;
	
//	strcpy(result.name, "Harsh");
//	printf("User1 Name :- %s\n", result.name);

	result.per = 80.33;
	printf("User1 Percentage :- %.2f", result.per);
	
	result.total = 560;
	printf("\nUser1 Total Marks :- %d", result.total);
	
}