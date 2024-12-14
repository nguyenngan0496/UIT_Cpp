#include <iostream>
#include <cmath>
using namespace std;

/*Viet ham tinh tong S(n) = 1 + 1/3 + 1/5 + ... + 1/(2*n+1)
Input: int n
Output: float S*/

float tongS(int n)
{
	float tong = 0;
	for(int i = 0; i <= n; i++)
	{
		tong += 1/((2*i + 1)*1.0);
	}
	return tong;
}

int main()
{
	int n;
	cout << "Hay nhap n = ";
	cin >> n;
	
	while(n < 0)
	{
		cout << "Hay nhap lai n >=0 : ";
		cin >> n;
	}
	float ketqua = tongS(n);
	cout << "Gia tri bieu thuc S = " << ketqua;
	
	return 0;
	
}
