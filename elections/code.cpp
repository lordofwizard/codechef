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
		int a,b,c;
		cin >> a >> b >> c;
		if (a > 50) {
			cout << "A" << endl;
		}
		else if (b > 50) {
			cout << "B" << endl;
		}
		else if ( c > 50){
			cout << "C" << endl;
		}
		else cout << "NOTA" << endl;
	}
}
