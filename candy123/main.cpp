#include <iostream>
using namespace std;


int main(){
	int t;
	cin >> t;
	while (t--){
	int lim=0,lim_max;
	cin >> lim_max;
	int bob=0,bob_max;
	cin >> bob_max;
	int who=0;
	for(int adder = 1;adder<1200;adder++){
		if(who == 0){
			if(lim_max<lim) {
				   cout << "Bob" << endl;
				   break;
			}
			lim+=adder;
			who++;
		}
		else if(who == 1){
			if(bob_max<bob) {
				   cout << "Limak" << endl;
				   break;
			}
			bob+=adder;
			who--;
		}
	}
	
	}
	return 0;
}
