#include <cmath>
#include <iostream>
using namespace std;
int main(){
	int so0, sothoc=0;
	cout << "Nhap so o:"; cin>> so0;
	for (int i = 0; i < so0; i++) 
	{
		cout << "0 so" << i
			<< "Co so thoc la" <<pow(2, i) << endl;
		sothoc += pow(2, i);
	}
	cout << "Tong so thoc chua trong" << "la" << sothoc << "hat\n";
	return 0;
}


