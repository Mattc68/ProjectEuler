#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n){
	
	if(n == 2) return true;
	if(n % 2 == 0) return false;
	
	for(int i = 3; i <= sqrt(n); i += 2){
		if(n % i == 0){
			return false;
		}
	}
	
	return true;
}

int main(){
	
	bool tf = true;
	int i = 1;
	int count = 1;
	
	while(tf){
		i += 2;
		if(isPrime(i)) count++;
		if(count == 10001) tf = false;
	}

	cout << i << endl;
	
	return 0;
}