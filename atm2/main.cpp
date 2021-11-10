#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int mon;
		cin >> mon;
		int p_arr[n];
		for(int i =0; i<n;i++){
			cin >> p_arr[i];
		}
		for ( int z=0; z<n;z++){
			if(mon>=p_arr[z]){
				   mon-=p_arr[z];
				   cout << 1 ;
			}
			else{
				   cout << 0 ;
			}
		}
	cout << endl;
	}

	return 0;
}

