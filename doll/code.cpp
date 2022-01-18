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
		int n,h,big=0;
		cin >> n >> h;
		int hi[n];
		for(int i = 0; i < n; i++){ cin >> hi[n]; if(hi[n] > h) big++;}
		cout << big << endl;
	}
}
