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
	string num;
	while(t--){
		cin >> num;
		int occu=0;
		for (auto &x : num){
			if( x == 52 ) occu++;
		}
		cout << occu << endl;
	}
}
