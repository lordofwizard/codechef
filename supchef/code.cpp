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
		int m , n , k;
		cin >> m >> n >> k;
		if ( (m - ( n * k )) > 0 ) cout << "YES" << endl;
		else cout << "NO" << endl;		
	}
}
