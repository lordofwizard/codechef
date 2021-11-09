#include <stdio.h>

long long gcd (long long a,long long b){
	if (b==0) return a;
	return gcd(b,a%b);
}

long long lcm(long long a , long long b){
	return (a/gcd(a,b)) *b;
}
long long main(){
	long long t;
	scanf("%d",&t);
	while(t--){
		long long a,b;
		scanf("%d %d",&a,&b);
		printf("%d %d\n",gcd(a,b),lcm(a,b));
	}
	return 0;
}


