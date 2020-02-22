#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	
	int n = 999;
	int m = 0;
	
	for(int i = n; i > 99; i--){
		for(int j = n; j > 99; j--){
			string str_n = to_string(i*j);
			vector <char> vec_n (str_n.begin(), str_n.end());
			vector <char> rev_n = vec_n;
			reverse(begin(rev_n), end(rev_n));
			
			bool isPal = vec_n == rev_n;
			
			if(isPal){
				if(i*j > m){
					m = i*j;
				}
			}
		}
	}
	
	cout << m << endl;
	
	return 0;
}