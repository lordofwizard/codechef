#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool vec_check(vector<char> vec, char a){
	bool result = false;
	for (auto & x : vec){
		if (x == a){
			result = true;
			break;
		}
	

	}
	return result;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		vector<char> char_vec;
		vector<int> num_vec(0);
		for (int i =0; i<str.length();i++){
			if(vec_check(char_vec,str[i])) continue;
			else  char_vec.push_back(str[i]);
		}
		cout << "yay" << endl;
		int z = 0;
		for( char x: char_vec){
			for (int p = 0; p< str.length();p++){
				if(x==str[p]) num_vec[z]++;
				if(str[p]=='\0') break;
			}
			z++;
		}
		cout << num_vec[0]<<endl;
	}

	return 0;
}
