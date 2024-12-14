#include <iostream>
#include <cmath>

using namespace std;

/*Viet thuc hien tinh toan
+Neu a va  b chan thi cong
+truong hop khac thi tru 


Input:
-a: float
-b: float

Output:
-tong || hieu */

float tinh(float a, float b)
{
	float kq = 0;
	if((int)a % 2 == 0 && (int)b % 2 ==0)
		return (a+b);		
	//else 
	return (a-b);
	
	
}


int main()
{
	
	cout << "Ket qua (...):" << tinh(2.1,5.9) << endl;
	cout << "Ket qua (...):" << tinh(-2.1,5.9) << endl;
	cout << "Ket qua (...):" << tinh(2.1,-5.9) << endl;
	
	
	return 0;
}
