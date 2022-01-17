/* This project template is created by LordOfWizard
 * https://github.com/lordofwizard
 * YouTube https://0x0.st/NUMD
 */
#define vi vector<int>
#define vc vector<char>

#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		unsigned int n,k,j;
		cin >> n >> k;
		vector<int> list[n];
		bool found = false;
		for(int i = 0 ; i < n ; i++){
			cin >> list[i];
		}	
/*		for(auto & x : list){
			for( auto & y : list ) {
				   if ( (k - x == y) && (x != y)) found = true;
		}
	}
*/

		for (int i = 0; i < n; i++){
			for (j = 0; j<n ; j++){
				if ( ( k - list[i] == list[j]) && (list[i] != list[j]) && (i != j) && (!(i==j))) found = true;
		}
		}
		if (found) cout << "Yes" << endl;
		else cout << "No" << endl;
}}
