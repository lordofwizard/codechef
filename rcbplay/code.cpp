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
		int x,y,z;
		cin >> x >> y >> z;
		bool possible = ( (y - x) <= 2 * z ) ? true : false;
		if ( possible) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
