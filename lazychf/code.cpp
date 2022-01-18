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
		int x,m,d;
		cin >> x >> m >> d;
		int result = ((x*m) > x+d) ? (x+d) : (x * m);
		cout << result << endl;

	}
}
