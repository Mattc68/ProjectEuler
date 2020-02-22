#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int p){
	int s = sqrt(p);
	
	if(p == 2){
		return true;
	}else if(p % 2 == 0 || p == 1){
		return false;
	}
	
	while(s > 2){
		if(p % s == 0){
			return false;
		}
		s = s-1;
	}
	
	return true;
}

int main(){
	
	long long n = 600851475143;
	
	for(int i = sqrt(n); i >= 0; i--){
		
		if(n % i == 0 && isPrime(i)){
			cout << i << endl;
			break;
		}
	}
	
	return 0;
}