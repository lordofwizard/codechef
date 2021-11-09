#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int num,step = 0;
		cin >> num;
		if ((num % 5) != 0) {
			cout << -1 << endl;
			break;
		}

		else if((num % 10) != 0) {
				num = num*2;
				step++;
			
		}
		cout << step << endl;
	}
	return 0;
}
