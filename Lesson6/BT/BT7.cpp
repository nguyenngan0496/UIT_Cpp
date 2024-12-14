#include <iostream>
#include <cmath>

using namespace std;

/*Viet ham giai phuong trinh bac 2: ax^2 + bx + c = 0
Input:
-a,b,c: float
Output:
-x: float*/

void ptrinh(float a, float b, float c)
{
	float x;
	if(a == 0)
	{
		if(b == 0)
		{
			if(c == 0)
			{
				cout << "Phuong trinh co vo so nghiem";
			}
			else
			{
				cout << "Phuong trinh vo nghiem";
			}
		}
		else
		{
			x = -c/b;
			cout << "Phuong trinh co 1 nghiem x = " << x;
		}
	}
	else
	{
		float delta = b*b - 4*a*c;
		
		if(delta < 0 )
		{
			cout << "Phuong trinh vo nghiem";
		}
		else if(delta == 0)
		{
			x = -b/(2*a);
			cout << "Phuong trinh co nghiem x = " << x;
		}
		else
		{
			float x1, x2;
			x1 = (-b + sqrt(delta))/(2*a);
			x2 = (-b - sqrt(delta))/(2*a);
			cout << "Phuong trinh co 2 nghiem x1 = " << x1 << " va x2 = " << x2;
		}
	}
	return;
}

int main()
{
	float a,b,c;
	cout << "Nhap lan luot a, b, c = ";
	cin >> a >> b >> c;
	
	ptrinh(a,b,c);
	
	return 0;
}
