#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int n = 100;
	int x = 0;
	int y = 0;
	
	for(int i = n; i > 0; i--){
		x += pow(i, 2);
		y += i;
	}
	
	int r = pow(y, 2) - x;
	cout << r << endl;
	
	return 0;
}