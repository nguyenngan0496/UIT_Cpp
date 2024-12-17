#include <iostream>
#include <math.h>
using namespace std;

struct ToaDo
{
	int x;
	int y;
};

typedef ToaDo Diem;

void printToaDo(ToaDo a)
{
	cout << "(" << a.x << "; " << a.y << ")" << endl;
}

/*1.Yeu cau: Tinh do dai khi biet 2 toa do
Input:
+Diem thu nhat: diem A
+Diem thu hai: diem B
Output:
+do dai  = return float
*/
float khoangCach(Diem a, Diem b)
{
	float x = pow(a.x - b.x, 2);
	float y = pow(a.y - b.y, 2);
	
	return sqrt(x+y);
}


/*2.Yeu cau: In mang chua cac toa do/diem
*/
void printArrDiem(ToaDo a[], int n)
{
	cout << "Cac diem trong mang: " << endl;
	for(int i = 0; i < n; i++)
	{
		printToaDo(a[i]);
	}
	
}

/*3.Yeu cau: Tao du lieu cho mang
*/
void initArrDiem(ToaDo a[], int& n)
{
	a[0] = {1,2};
	a[1] = {3,4};
	a[2] = {4,5};
	a[3] = {6,7};
	a[4] = {7,8}; 
	
	n = 5;
}


/*3.Yeu cau: Tao du lieu cho mang
Input:
+
+
Output:
+
+
*/

int main()
{
	int a[100] = {1,2,7,9,5};
	int n = 5;
	
	Diem b[100] = {{1,2}, {3,4}, {5,6}, {7,8}};
	int m = 4;
	
	Diem c[100];
	int k = 0;
	
	initArrDiem(c,k);
	printArrDiem(c,k);
	
	return 0;
}
