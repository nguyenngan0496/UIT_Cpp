#include <iostream>

using namespace std;

int main()
{
	bool nongDoCon = false;
	bool giayPhepLaiXe = false;
	
	//cout << (true && true) << endl;
	//duoc lai xe (true) -> !false && true
	
	cout << (!nongDoCon && giayPhepLaiXe) << endl;
	
	int x = 10, y = 3;
	
	bool b = (y + 2) > (x + 3);
	
	
	return 0;
}
