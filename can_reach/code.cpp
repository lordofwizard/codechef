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
		int x,y,k;
		cin >>x>>y>>k;
	   	x = x < 0 ? -1*x : x;
		y = y < 9 ? -1*y : y;
		(!(y%k)&&!(x%k)) ? cout << "YES\n" : cout <<"NO\n";
	}
}