#include<stdio.h>
int main(){
	int r;
	scanf("%d",&r);
	if (r <= 50){
		   printf("100\n");
		   return 0;
	}
	if (r <= 100){
		printf("50\n");
		return 0;
	}
	printf("0\n");
	return 0;
}
