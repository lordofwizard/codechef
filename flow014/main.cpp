#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;

	while (t--){
		int hard,tensile;
		float carb;
		bool hard_c =false, carb_c =false,tensile_c =false,all=false;
		cin >> hard >> carb >> tensile;
		if(hard > 50) hard_c = true;
		if(carb < 0.7) carb_c = true;
		if(tensile > 5600) tensile_c = true;
		if (hard_c){ if(carb_c) { if(tensile_c) all = true;}}
		if(all) cout << 10 << endl;
		else if(hard_c && carb_c)		  cout << 9  << endl;
		else if(carb_c && tensile_c)		  cout << 8  << endl;
		else if(hard_c && tensile_c)		  cout << 7  << endl;
		else if(hard_c || tensile_c || carb_c)    cout << 6  << endl;
		else
			cout << 5 << endl;
	}
	return 0;
}




