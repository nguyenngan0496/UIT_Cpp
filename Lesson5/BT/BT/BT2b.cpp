#include <iostream>
#include <cmath>
using namespace std;

//Viet ham tinh tong so chinh phuong nho hon n
//input:n
//output: sum soCP < n

//Ham check so CP
bool checkSoCP(int n){
	if (n < 0){
		return false;
	}
	for (int i = 0; i*i <= n; i++){
		if (i*i == n){
			return true;
		}
	}
	return false;
}

//Ham tinh tong so CP nho hon n
int tongSoCP(int n){
	int sum = 0;
	for (int i = 0; i < n; i++){
		if(checkSoCP(i)){
			sum += i;
		}
	}
	return sum;
}


int main()
{
	int n;
	cout << "Nhap so n = ";
	cin >> n;
	
	int sum = tongSoCP(n);
	cout << "Tong cac so chinh phuong nho hon n la " << sum << endl;
	
	return 0;
	
}
