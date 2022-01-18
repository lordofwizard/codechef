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
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		bool found = ((a+c==180) && (b+d==180)) ? true : false;
		if(found) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
