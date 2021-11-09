#include <iostream>
using namespace std;

bool is_prime(int num){
	for (int i=2; i<=num/2; i++){
		if(num %i ==0)
			return false;

	}
	return true;
}

int main(){

	int t;
	cin >> t;
	while(t--){
		int farm1,farm2;
		cin >> farm1 >> farm2;


		for(int i=1;i<10000;i++){
			int total = farm1 + farm2 +i;

		// total = prime ???? 
		if(is_prime(total) == true){
			cout << i << endl;
			break;
		}
		}
	}


	return 0;
}
