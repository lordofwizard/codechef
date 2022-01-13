#include <iostream>
using namespace std;

int gcd_finder(int a , int b){
	if (b != 0) return gcd_finder(b,a%b);
	else return a;
}


int main(){
   
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int gcd = gcd_finder(n,m);
		int answer = (n/gcd) * (m/gcd);
		cout << (int)answer << endl;
	}
	return 0;
}
