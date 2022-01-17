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
		int dsa_d,toc_d,dm_d;
		cin >> dsa_d >> toc_d >> dm_d;
		int dsa_s,toc_s,dm_s;
		cin >> dsa_s >> toc_s >> dm_s;
		int d_total = dsa_d + toc_d + dm_d;
		int s_total = dsa_s + toc_s + dm_s;

		if(dsa_d == dsa_s && toc_d == toc_s && dm_s == dm_d) cout << "TIE" << endl;
		else if(d_total > s_total) cout << "DRAGON" << endl;
		else if (d_total < s_total) cout << "SLOTH" << endl;
		else if (d_total == s_total){
			   if(dsa_d > dsa_s) cout << "DRAGON" << endl;
			   if(dsa_d < dsa_s) cout << "SLOTH" << endl;
			   if(dsa_d == dsa_s) {
					 if(toc_s > toc_d) cout << "SLOTH" << endl;
					 if(toc_d > toc_s) cout << "DRAGON" << endl;
			   }
		}
	}
}
