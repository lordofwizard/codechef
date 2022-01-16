/* This project template is created by LordOfWizard
 * https://github.com/lordofwizard
 * YouTube https://0x0.st/NUMD
 */

#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int b;
		cin >> b;
		b -=2;
		b = floor(b/2);
		cout << b * (b+1)/2 << endl;
	}
}
