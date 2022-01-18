/* This project template is created by LordOfWizard
 * https://github.com/lordofwizard
 * YouTube https://0x0.st/NUMD
 */

#include <bits/stdc++.h>

using namespace std;

signed main(){
	long long t;
	cin >> t;
	while(t--){
		   bool found = false;
		   long long n , k;
		   long long list[n];
		   cin >> n >> k;
		for(long long i = 0; i<n; i++){
			cin >> list[i];
		}
		sort(list , list+n);
		long long i = 0; long long j = n-1;
		while(i<j){
			if (list[i] + list[j] == k) {found = true;break;}
			if (list[i] + list[j] < k) ++i;
			if (list[i] + list[j] > k) --j;
		}
	if (found) cout << "Yes" << endl;
	else cout << "No" << endl;
	}
	return 0;
}
