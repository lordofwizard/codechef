#include <stdio.h>

long long gcd(long long *a,long long *b){
	if(*b==0) return *a;
	long long x = *a%*b;
	return gcd(b,&x);

}

long long lcm (long long *a,long long *b){
	return (*a/gcd(a,b) * *b);
}

long long main(){
	long long t;
	scanf("%d",t);
	while(t--){
		long long n1,n2;
		scanf("%d %d",&n1,&n2);
		printf("%d %d\n",gcd(&n1,&n2),lcm(&n1,&n2));
		
	}
	return 0;
}
