#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main(){
	string known;
	cin >> known;
	int t;
	cin >> t;
	std::vector<bool> bool_vec(26,false);
	for( char chr : known ) 
		   bool_vec[chr - 'a'] = true;
	while (t--){
		string word;
		cin >> word;
		bool answer = true;
		for (char chr : word){
			   if (!bool_vec[chr - 'a'])
					 answer = false;
		}
		if (answer)
			   cout << "Yes" << endl;
		else 
			   cout << "No" << endl;
	}	
	return 0;
}
