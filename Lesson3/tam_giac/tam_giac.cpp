#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a, b, c;
	cout << "Nhap 3 so a, b, c de kiem tra a, b, c co phai 3 canh cua tam giac hay khong:" << endl;
	cin >> a >> b >> c;
	
	if( a+b > c && a+c > b && b+c > a)
	{
		cout << "Day la tam giac" << endl;
		
		if(a==b && b==c)
		{
			cout << "Day la tam giac deu" << endl;
		}
		
		else if(
			pow(a,2) + pow(b,2) == pow(c,2) ||
			pow(b,2) + pow(c,2) == pow(a,2) ||
			pow(a,2) + pow(c,2) == pow(b,2)
		)
			cout << "Day la tam giac vuong" << endl;
		else if(a==b || a==c || b==c)
			cout << "Day la tam giac can" << endl;
		else
			cout << "Day la tam giac thuong" << endl;
	}	
	else
			cout << "Day khong phai tam giac" << endl;
	
	return 0;
}
