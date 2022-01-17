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
		int a,b;	
		cin >> a >> b;
		if((a+b)%2) cout << "Alice" << endl;
		else cout << "Bob" << endl;
	}
}
