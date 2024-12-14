#include <iostream>
using namespace std;

/*Viet ham hoan vi cua hai so a va b
Input: int a, int b
Output: int a, inb

Viet ham tinh Tong va Tich cua a va b (khong dung return va chi duoc phep khai bao toi da 2 tham so*/

int hoanVi(int &a, int &b)
{

	int c = a;
	a = b;
	b = c;
	
}

int tong(int &a, int &b)
{
	a = a + b;
	
}

int tich(int &a, int &b)
{
	b = a*b;
	
}

int main()
{
	int a,b;
	cout << "Nhap lan luot a, b = " << endl;
	cin >> a >> b;
	
	hoanVi(a,b);
	cout << "a = " << a << " va b = " << b << endl;
	
	tong(a,b);

	
	cout << "Tong cua a va b = " << a << endl;
	
	tich(a,b);
    cout << "Tich cua a va b = " << b << endl;
	return 0;
} 
