#include <iostream>

using namespace std;

int main()
{
	int N;
	cout << "Nhap so nguyen duong N:" << endl;
	cin >> N;
	
	int hc = N/10; //hang chuc
	int dv = N%10; //hang don vi
	
	cout << hc + dv << endl;
	//=================
	
	int h, m, s;
	cout << "Nhap gio, phut, giay:" << endl;
	cin >> h >> m >> s;
	
	cout << "Tong so giay:" << h*3600 + m*60 + s ;
	//==============
	
	int xe = 5751;
	
	int x = xe %1000;
	int y ;
	
	
	return 0;
}
