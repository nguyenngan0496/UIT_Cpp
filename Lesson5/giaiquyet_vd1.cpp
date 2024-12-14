#include <iostream>

using namespace std;

//Viet dinh nghia ham
int nhap()
{
	int a;
	do
	{
		cout << "Nhap gia tri: ";
		cin >> a;
	}while(a <= 0);
	
	//cout << "Gia tri hop le: " << a << endl;
	
	return a;
}

int main()
{
	
	int a = nhap();
	int b = nhap();
	int c = nhap();
	
	return 0;
}
