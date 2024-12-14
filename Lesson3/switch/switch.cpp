#include <iostream>

using namespace std;

int main()
{
	char diem;
	cout << "Nhap diem so:";
	cin >> diem;
	
	cout << "\nKet qua xet:";
	switch(diem)
	{
		case 'A':
			cout << "Xuat sac" << endl;
			break;
			
		case 'B':
			cout << "Gioi" << endl;
			break;
			
		case 'C':
			cout << "Kha" << endl;
			break;
	}
	
}
