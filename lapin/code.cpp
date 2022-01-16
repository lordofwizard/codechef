/* This project template is created by LordOfWizard
 * https://github.com/lordofwizard
 * YouTube https://0x0.st/NUMD
 */
#define vi vector<int>
#define vc vector<char>

#include <bits/stdc++.h>
#include <vector>

using namespace std;

char int_to_str(int x){
	return 48+x;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		string str_even;
		int size = str.length();
		if (size % 2 == 1){
			for (int i = 0; i < (int)(size/2);i++) {
				str_even.push_back(str[i]);
			}
			for (int i = (int)(size/2)+1; i < size ; i++){
				str_even.push_back(str[i]);
			}
			str = str_even;
		}
		map <char,int> left_map;
		map <char,int> right_map;
		size = str.length();
		for (int i = 0; i <= (size/2)-1 ; i++){
			if (left_map.find(str[i]) == left_map.end()){
				left_map[str[i]] = 0;
			}
			left_map[str[i]]++;
		}
		for (int i = size/2; i <= size-1; i++){
			if (right_map.find(str[i]) == right_map.end()){
				right_map[str[i]] = 0;
			}
			right_map[str[i]]++;
		}
		string test_1;
		string test_int_1;
		string test_int_2;
		string test_2;
		for(auto &element : left_map ){
			test_1.push_back(element.first);
			test_int_1.push_back(int_to_str(element.second));
		}
		for(auto &element : right_map ){
			test_2.push_back(element.first);
			test_int_2.push_back(int_to_str(element.second));
		}
//		cout << test_1 << endl << test_2 << endl;		
//		cout << test_int_1 << endl << test_int_2 << endl;	
//		cout << test_2 << endl;
		if ((test_1 == test_2) && (test_int_1 == test_int_2)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

}
