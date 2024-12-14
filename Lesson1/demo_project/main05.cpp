#include <iostream>

using namespace std;

int main()
{
	int tuoi;
	tuoi = 18;
	float heSoLuong = 2.34, luongCB = 1.6e6; //1600000;
	
	heSoLuong = heSoLuong + 0.33;
	float luongHT = luongCB * heSoLuong;
	
	cout << "He so luong:" << heSoLuong << endl << "Tuoi:" << tuoi << endl;
	cout << "Luong hang thang:" << luongHT << endl;
	
	return 0;
}
