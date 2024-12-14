#include <iostream>

using namespace std;

int main()
{
	int thang, nam;
	cout << "Nhap thang, nam:";
	cin >> thang >> nam;
	
	cout << "\nKet qua:";
	switch(thang)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:	
			cout << "31" << endl;
			break;
			
		case 4:
		case 6:
		case 9:
		case 11:
			cout << "30" << endl;
			break;
			
		case 2:
			if(nam%4 == 0 && nam%100 != 0 || nam%400 == 0)
			cout << "29" << endl;
			else
			cout << "28" << endl;
			break;
			
		default:
			cout << "Khong kha dung" << endl;
			
	}
	
	return 0;
}
