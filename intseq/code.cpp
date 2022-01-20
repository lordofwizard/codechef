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
		float num;
		cin >> num;
		int c = 0;
	bool 	flag = false;
		while ( true ){
			if ( num == 1.0 ){
			flag = true;	break;
			}
			if ( num < 1.0 ) {
				break;
			}
			num /=2;
			c++;
		}
			if (flag) cout << c << endl;
			else cout << 0 << endl;
		}
	}

