#include <iostream>
#include <cmath>
using namespace std;

/*Viet ham tinh gia tri bieu thuc: S(n) = 1/2 + 2/3 + 3/4 +... + n/(n+1)
Input: int n
Output: float S
*/

float tongS(int n)
{
	float tong = 0;
	for(int i = 1; i <= n; i++)
	{
		tong += (i*1.0)/ (i + 1);/*Khi thuc hien phep chia, thi nhan voi 1.0 de dam bao ket qua la so thuc*/
	}
	return tong;
}

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	

	float ketqua = 0;
	ketqua = tongS(n);
	
	
	cout << "Gia tri bieu thuc S(n) = " << ketqua << endl;
	
	return 0;
}
