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
		int sa,sb,sc;
		cin >> sa >> sb >> sc;
		if (sa < sb && sa < sc) cout << "Draw" << endl;
		if (sb < sa && sb < sc) cout << "Bob" << endl;
		if (sc < sb && sc < sa) cout << "Alice" << endl;

	}
}
