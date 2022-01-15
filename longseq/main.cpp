#include <iostream>
#include <vector>
#include <cstring>
#include <map>
using namespace std;



int main(){
	int t;
	cin >> t;
	while (t--){
		string no;
		cin >> no;
		string no_copy = no;
		int occ_0=0;
		int occ_1=0;
		for(int i = 0; i < no.size(); i++){
			if (no[i] == '0') {
			   occ_0++;	   
			}
			if (no[i] == '1') {
				occ_1++;
			}

		}
		if (occ_0 == 1){
			   cout << "Yes" << endl;
		}
		else if (occ_1 == 1){
			   cout << "Yes" << endl;
		}
		else cout << "No" << endl;
	}

}
