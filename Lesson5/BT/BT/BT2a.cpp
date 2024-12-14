#include <iostream>
#include <cmath>
using namespace std;

//Viet ham tinh tong cac so nguyen to nho hon n
//input: n
//output: tong

//Ham check so NT
bool checkSoNT(int n){
	if (n < 2){
		return false;
	}
	for (int i = 2; i < n; i++){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}

//Ham tinh tong so nguyen to nho hon n
int tongSoNT(int n) {
	int sum = 0;
	for (int i = 2; i < n; i++){
		if(checkSoNT(i)){
			sum += i;
		}
	}
	
	return sum;
}

//Ham in ra man hinh
int main()
{
	int n;
	cout << "Nhap so n = ";
	cin >> n;
	
	int sum = tongSoNT(n);
	cout << "Tong cac so nguyen to nho hon n = " << sum << endl;
	
	return 0;
}

