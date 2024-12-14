#include <iostream>

using namespace std;

int main()
{
	int n;
	
	do
	{
		cout << "Nhap gia tri: ";
		cin >> n;
	}while(n <= 0);
	
	cout << "Gia tri hop le: " << n << endl;
	
	return 0;
}
