/* This project template is created by LordOfWizard
 * https://github.com/lordofwizard
 * YouTube https://0x0.st/NUMD
 */
#define vi vector<int>
#define vc vector<char>

#include <bits/stdc++.h>
#include <vector>

using namespace std;

void Combi(char a[], int reqLen, int s, int currLen, bool check[], int l)
{
   if(currLen > reqLen)
   return;
   else if (currLen == reqLen) {
      cout<<"\t";
      for (int i = 0; i < l; i++) {
         if (check[i] == true) {
            cout<<a[i]<<" ";
         }
      }
      cout<<"\n";
      return;
   }
   if (s == l) {
      return;
   }
   check[s] = true;
   Combi(a, reqLen, s + 1, currLen + 1, check, l);
   check[s] = false;
   Combi(a, reqLen, s + 1, currLen, check, l);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		
	}
}
