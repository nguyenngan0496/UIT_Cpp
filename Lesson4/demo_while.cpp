#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Hay nhap n = ";
	cin >> n;
	
	while (n<0)
	{
		cout << "Hay nhap lai n = ";
		cin >> n;
	}
	
	cout << "Gia tri hop le n = " << n << endl;
	
	return 0;
	
}
