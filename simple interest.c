#include<stdio.h>

int main(){
	int principle_amount;
	int time;
	int rate;
	float simple_interest; 
	
	printf("Principle Amount:");
	scanf("%d",&principle_amount);
	
	printf("Time:");
	scanf("%d",&time);
	
	printf("Rate:");
	scanf("%d",&rate);
	
	simple_interest = (principle_amount * time * rate)/100;
	
	printf("Simple Interest:%.2f",simple_interest);
	
	return 0;
	
}