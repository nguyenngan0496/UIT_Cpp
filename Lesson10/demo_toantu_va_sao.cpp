#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	double y = 3.34;
	
	int a[1000];
	
	cout << "Dia chi bien x: " << &x << endl;
	printf("Dia chi bien x: %p hoac %x\n", &x, &x);
	
	cout << "Lay du lieu: " << *(&x) << endl; 
	
	int* p = &x;
	
	double* p1 = &y;
	
	return 0;
}
