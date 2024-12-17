#include <iostream>

using namespace std;

int main()
{
	float x  = 1.5;
	
	float* p = &x;
	
	*p = 1.2;
	
	cout << "x = " << x << endl;
	
	char hoTen[100] = {'a', 'b'};
	
	cout << hoTen ;
	
	return 0;
}
