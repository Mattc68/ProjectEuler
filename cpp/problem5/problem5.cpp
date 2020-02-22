#include <iostream>

using namespace std;

int main(){
	
	int x = 10;
	bool tf = true;
	while(tf){
		
		for(int i = 20; i >= 1; i--){
			if(x % i != 0){
				break;
			}
			
			if(i == 1){
				tf = false;
			}
		} 
		
		x++;
	}
	
	cout << x - 1 << endl;
	
	return 0;
}