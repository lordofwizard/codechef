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
		int m,s,x;
		cin >> m >>s;
		if ( s > m )cout << 0 << endl;
		else {for(x = 0 ; m >= s ; ++x){ m -= s;}
		cout << x << endl;
		}
	}
}
