#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	float y = 3.5;
	
	cout << "Ket qua x =" << x << endl << "Ket qua y =" << y << endl;
	
	printf("Ket qua x = %d \nKet qua y= %f", x, y);
	
	// x + y = 10 + 3.5 = 13.5
	
	printf("\nx + y = %d + %f = %f", x, y, x+y);
	
	return 0;
}
