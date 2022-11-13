#include<iostream>
using namespace std;
int main() {
	int num = 2;
	int temp1 = 1, temp2 =3;
	
	while (num < 520) {
		cout << temp1 << endl;
		temp1 += temp2;
		temp2 += temp2;
		num = temp2;
	}
	//1
	//4  3
	//10 6
	//22 12 
	//46 24 
	//94 48 
	//190 96
	//382 192 
	//766 384





	return 0;
}