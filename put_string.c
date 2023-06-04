#include <stdio.h>

int main(){
	char ex[20];
	puts("Enter the name: ");
	scanf("%20s",ex);
	printf("Dear %s,\n\tHow are you?",ex);
}