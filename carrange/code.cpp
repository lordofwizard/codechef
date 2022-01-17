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
	int p,m,v;
	while(t--){
		cin >> p >> m >> v;		
		m = m - (p-1);
		cout << m * v << endl;
	}
}
