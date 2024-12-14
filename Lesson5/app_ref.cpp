#include <iostream>

using namespace std;

//Input: se la hai so a va b
//Output: se la 2 ket qua, tong a+b va hieu a-b

int tinh(int a, int b, int& hieu)
{
	int tong = a + b;
	hieu = a - b;
	
	return tong;
}

int main()
{
	int t, h = 0;
	
	t = tinh(5,10,h);
	
	cout << "Tong = " << t << endl;
	cout << "Hieu = " << h << endl;
	
	return 0;
}
