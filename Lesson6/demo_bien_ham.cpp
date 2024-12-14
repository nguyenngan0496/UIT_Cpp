#include <iostream>

using namespace std;

int a = 10;
void funa()
{
	int x = -369;
	int i = 0;
	
	for (int i = 0; i < x; i++)
	{
		cout << "10. i = " << i << endl;
	}
	cout << x << endl;
	cout << "8. i = " << i << endl;
	
}

void funb()
{
	int x = -369;
	if(x<7)
	{
		
	}
	cout << x << endl;
	
	
}

void func()
{
	int a = 20;
	cout << "Trong ham c, a= " << a << endl;
	cout << "Trong ham c, goi a toan cuc = " << ::a << endl;
	::a = 30;
}

int main()
{
	int x = 1;
	//funa();
	
	func();
	cout << "Goi trong main. Toan cuc a = " << a << endl;
	
	return 0;
}
