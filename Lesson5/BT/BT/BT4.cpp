#include <iostream>
using namespace std;

//Viet ham tinh chu vi, dien tich hinh chu nhat khi biet chieu dai a, chieu rong b
//input: chieu dai a, chieu rong b >0
//output: chu vi C, dien tich S

int chuViC(int a, int b, int& dienTichS){
	int chuViC = (a + b)*2;
	dienTichS = a*b;	
	
	return chuViC;
}

void veHinhChuNhat(int a, int b){
	for (int i = 0; i <= a; i++){
		for (int i = 0; i <= b; i++){
			cout << "*" ;
		}
		cout << endl;
	}
}


int main()
{
	int a, b;
	cout << "Nhap chieu dai a = ";
	cin >> a;
	cout << "Nhap chieu rong b = ";
	cin >> b;
	
	int dienTichS;
	int chuVi = chuViC(a,b, dienTichS);
	
	cout << "Chu vi va dien tich cua hinh chu nhat lan luot la " << chuVi << " va " << dienTichS << endl;
	
	veHinhChuNhat(a,b);
	
	return 0;
}


