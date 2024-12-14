#include <iostream>

using namespace std;

int main()
{
	/*De dc phep lai xe can dap ung dieu kien:
	Nong do con <=0
	Co bang lai
	*/
	
	float nongDoCon = 0.0;
	bool bangLai = true;
	
	if(nongDoCon <= 0 && bangLai == true)//False && True -> False
	{
		//Khoi 1
		cout << "1.Duoc phep lai xe" << endl;
		cout << "2.Duoc phep lai xe" << endl; 
		cout << "3.Duoc phep lai xe" << endl;
		cout << endl;
	}
	else
	{
		cout << "1.Khong duoc phep lai xe" << endl;
		cout << "2.Khong duoc phep lai xe" << endl; 
		cout << "3.Khong duoc phep lai xe" << endl;
		cout << endl;
	}
	
	
	if(bangLai ==  true)
	{
		if(nongDoCon <= 0)
		{
			cout << "Duoc phep lai xe" << endl;
		}
	}
	else
	{
		cout << "Khong duoc phep lai xe" << endl;
	}
	
	return 0;
}
