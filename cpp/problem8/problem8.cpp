#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int n = 13;
	
	string str1 = "73167176531330624919225119674426574742355349194934";
	str1.append("96983520312774506326239578318016984801869478851843");
	str1.append("85861560789112949495459501737958331952853208805511");
	str1.append("12540698747158523863050715693290963295227443043557");
	str1.append("66896648950445244523161731856403098711121722383113");
	str1.append("62229893423380308135336276614282806444486645238749");
	str1.append("30358907296290491560440772390713810515859307960866");
	str1.append("70172427121883998797908792274921901699720888093776");
	str1.append("65727333001053367881220235421809751254540594752243");
	str1.append("52584907711670556013604839586446706324415722155397");
	str1.append("53697817977846174064955149290862569321978468622482");
	str1.append("83972241375657056057490261407972968652414535100474");
	str1.append("82166370484403199890008895243450658541227588666881");
	str1.append("16427171479924442928230863465674813919123162824586");
	str1.append("17866458359124566529476545682848912883142607690042");
	str1.append("24219022671055626321111109370544217506941658960408");
	str1.append("07198403850962455444362981230987879927244284909188");
	str1.append("84580156166097919133875499200524063689912560717606");
	str1.append("05886116467109405077541002256983155200055935729725");
	str1.append("71636269561882670428252483600823257530420752963450");
	
	int l = str1.length();
	
	long long int max = 0;
	
	for(int i = n-1; i < l; i++){
		long long int test = 1;
		
		for(int j = n-1; j >= 0; j--){
			long long int digit = stoi(str1.substr(i-j, 1));
			test = test * digit;
		}
		
		if(test > max){
			max = test;
		}
	}

	cout << max << endl;
	return 0;
}