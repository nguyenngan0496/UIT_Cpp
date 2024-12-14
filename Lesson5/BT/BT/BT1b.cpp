#include <iostream>
#include <cmath>
using namespace std;

//Viet ham kiem tra n co phai so nguyen to
//input: n
//output: true (la so NT) - false (khong phai so NT)

bool laSoNT(int n)
{
	if (n < 2)
	{
		return false;
	}
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int number;
	cout << "Nhap so n = ";
	cin >> number;
	
	if (laSoNT(number))
	{
		cout << number << " la so nguyen to";
	}
	else {
		cout << number << " khong phai la so nguyen to";
	}
	
	return 0;
}



