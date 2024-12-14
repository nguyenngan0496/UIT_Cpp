#include <iostream>
using namespace std;

//Viet ham tinh tong, tich cac uoc so duong cua n
//input: n
//output: tong, tich uoc so n

//Ham check co phai uoc so cua n hay khong
bool checkUocSoCuaN(int n){
	for (int i = 1; i <= n; i++){
		if (n % i == 0){
			return true;
		}
	}
	return false;
}



//Ham tinh tong uoc so cua n
int tongUocSoCuaN(int n){
	int tong = 0;
	for(int i = 1; i <= n; i++){
		if(checkUocSoCuaN(i)){
			tong += i;
		}
	}
	return tong;
}

int tichUocSoCuaN(int n){
	int tich = 1;
	for(int i = 1; i <= n; i++){
		if(checkUocSoCuaN(i)){
			tich *= i;
		}
	}
	return tich;
}

//Ham in ket qua
int main()
{
	int n;
	cout << "Nhap so n = " ;
	cin >> n;
	
	int tong = tongUocSoCuaN(n);
	int tich = tichUocSoCuaN(n);
	cout << "Tong va Tich cac uoc so duong cua n lan luot la " << tong << " va " << tich << endl;
	
	return 0;
}


