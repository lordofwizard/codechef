#include <stdio.h>

int gcd_find(int *a, int*b){
	int gcd;
	for(int i = 1; i <= *a && i <= *b; ++i)
	{
		if(*a%i==0 && *b%i==0)	gcd = i;
	}
	return gcd;
}
int lcm_find(int *a, int*b){
	if(*a == *b) return *a;
	int big = (*a > *b)? *a : *b;
	while(1){
		if (big % *a ==0 && big %*b==0){
			return big;
			break;
		}
		++big;
	}
	return big;
}

int main(){
	int testcases;
	scanf("%d", &testcases);
	while(testcases--){
		int n1=0,n2=0;
		scanf("%d %d",&n1,&n2);
		printf("%d %d\n",gcd_find(&n1,&n2),lcm_find(&n1,&n2));
	}
	return 0;
}
