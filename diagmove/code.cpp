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
		int x,y;
		cin >> x >> y;
		int total = x + y;
		if ( total < 0) total *= -1;
		if (!( total % 2)) cout << "YES" << endl;
		else cout << "NO" << endl;		
	}
}
