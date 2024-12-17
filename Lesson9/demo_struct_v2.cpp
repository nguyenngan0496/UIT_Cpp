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


/*Yeu cau:
Input:
+
+
Output:
+
+
*/

/*Yeu cau:
Input:
+
+
Output:
+
+
*/
int main()
{
	ToaDo a = {1,2};
	ToaDo b = {3,4}, c = {5, 6};
	
	printToaDo(a);
	printToaDo(b);
	
	cout << "1.Test: khoang cach AB(...) = " << khoangCach(a,b) << endl;
	cout << "2.Test: khoang cach AC(...) = " << khoangCach(a,c) << endl; 
	
	return 0;
}
