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
		int n,x,p;
		cin >> n >> x >> p;
		int result = ( ( x * 3 ) + ( ( n - x ) * -1));
		bool pof = ( p <= result ) ? true : false;
		if (pof) cout << "PASS" << endl;
		else cout << "FAIL" << endl;
	}
	return 0;
}
