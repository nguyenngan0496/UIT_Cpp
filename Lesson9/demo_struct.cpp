#include <iostream>
using namespace std;

typedef struct ToaDo
{
	int x;
	int y;
} Diem;

struct ToaDoBien
{
	int x;
	int y;
} diemA = {1,3}, diemB = {2,6};

void printDiem(ToaDo a)
{
	cout << "(" << a.x << "; " << a.y << ")";
}

int main()
{
	ToaDo a = {1,2};
	Diem b = {3,4};
	
	//cout << a;
	printDiem(a);
	printDiem(b);
	
	return 0;
}
