#include <iostream>
#include <cmath>
using namespace std;

//Viet ham kiem tra n co phai so chinh phuong
//input: n
//output: true (la so CP) - false (khong phai so CP)

bool laSoCP(int n)
{
	if (n < 0)
	{
		return false;
	}
	for (int i = 0; i*i <= n; i++)
	{
		if (i*i == n)
		{
			return true;
		}
	}

	return false;
}

int main()
{
	int number;
	cout << "Nhap so n = ";
	cin >> number;
	
	if (laSoCP(number))
	{
		cout << number << " la so chinh phuong";
	}
	else {
		cout << number << " khong phai la so chinh phuong";
	}
	
	return 0;
}



