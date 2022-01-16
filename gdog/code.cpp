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
		int n,k;
		int max = 0;
		cin >> n >> k;
		for (int i = 1; i <= k ; i++){
			int ans = n%i;
			if (ans > max) max = ans;
		}
		cout << max << endl;
	}
	return 0;
}
