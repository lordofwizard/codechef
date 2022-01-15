#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int count = 0;
		while (n != 0){
			  int step = floor(sqrt(n));

			 n = n - (step * step);
			count++; 
		}
		cout << count << endl;
	}
}
