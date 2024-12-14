#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;
	
	cout << "Nhap lan luot a, b, c, d =";
	cin >> a >> b >> c >> d;
	
	float tb = (float)(a+b+c+d)/4;
	cout << "Trung binh cong a, b, c, d =" << tb << endl;
	
	return 0;
}
