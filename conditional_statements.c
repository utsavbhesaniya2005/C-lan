#include<stdio.h>
main(){
	
	int s1, s2, s3, s4, s5, s6, s7, total;
	float per;
	
	printf("Enter Marks Of Gujrati : ");
	scanf("%d", &s1);
	
	printf("Enter Marks Of Hindi : ");
	scanf("%d", &s2);
	
	printf("Enter Marks Of English : ");
	scanf("%d", &s3);
	
	printf("Enter Marks Of Sanskrit : ");
	scanf("%d", &s4);
	
	printf("Enter Marks Of Science : ");
	scanf("%d", &s5);
	
	printf("Enter Marks Of SS : ");
	scanf("%d", &s6);
	
	printf("Enter Marks Of Computer : ");
	scanf("%d", &s7);
	
	total = s1 + s2 + s3 + s4 + s5 + s6 + s7;
	
	printf("Total Marks Of All Subjects : %d", total);
	
	per = total / 7;
	
	printf("Your Percentage : %.2f\n", per);
	
	if(per >= 90){
		printf("Your Grade Is : A+");
	}else if(per >= 80){
		printf("Your Grade Is : A");
	}else if(per >= 70){
		printf("Your Grade Is : B+");
	}else if(per >= 60){
		printf("Your Grade Is : B");
	}else if(per >= 50){
		printf("Your Grade Is : C");
	}else{
		printf("Your Are FAIL");
	}
}