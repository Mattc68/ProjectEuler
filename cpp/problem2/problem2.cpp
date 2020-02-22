#include <iostream>
using namespace std;

int main(){
	int a = 1;
	int b = 2;
	int c = a + b;
	int r = b;
	
	while(c <= 4000000){
		a = b;
		b = c;
		c = a + b;
		
		if(c % 2 == 0){
			r = r + c;
		}
	}
	
	cout << r << endl;
	
	return 0;
}