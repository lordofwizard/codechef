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
		int x,a,b;
		cin >>  x >> a >> b;
		int solu= a + ((100-x) * b);
		cout << solu * 10 << endl;
	}
}
