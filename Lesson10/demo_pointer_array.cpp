#include <iostream>

using namespace std;

int main()
{	//         0  1  2  3  4
	int a[] = {2, 5, 8, 1, 6};
	//            p
	
	cout << "Dia chi mang: " << a << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << &a[i] << endl;
	}
	
	int* p = &a[1];
	
	cout << "Gia tri: " << *p+2 << endl;
	
	return 0;
}
