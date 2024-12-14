#include <iostream>
using namespace std;

int x;
void c();
void a(int, int);


void a()
{
	cout << "Ham a" << endl;
}

void b()
{
	cout << "Ham b" << endl;
	c();
}

void c()
{
	cout << "Ham c" << endl;
	a();
	b();
}

int main()
{
	
}
