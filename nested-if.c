#include<stdio.h>
main(){
	
	int a, b, c, d, e;
	
	printf("Enter value of A : ");
	scanf("%d", &a);
	
	printf("Enter value of B : ");
	scanf("%d", &b);
	
	printf("Enter value of C : ");
	scanf("%d", &c);
	
	printf("Enter value of D : ");
	scanf("%d", &d);
	
	printf("Enter value of E : ");
	scanf("%d", &e);
	
	if(a>b){
		//A is max
		if(a>c){
			//A is max
			if(a>d){
				//A is max
				if(a>e){
					//A is max
					printf("A is max");
					
				}else{
					//E is max
					printf("E is max");
					
				}
			}else{
				//D is max
				printf("D is max");
			
			}
		}else{
			//C is max
			printf("C is max");
			
		}
	}else{
		//B is max
		if(b>c){
			//B is max
			if(b>d){
				//B is max
				printf("B is max");
				
			}else{
				//D is max
				if(b>e){
					//B is max
					printf("B is max");
					
				}   
				else{
					//E is max
					printf("E is max");
					
				} 
				
			}
		}else{
			//C is max
			if(c>d){
				//C is max
				printf("C is max");
				
			}else{
				//D is max
				if(d>e){
					//D is max
				}
				else{
					//E is max
				}
				
			}
		}
		
	}
	
}