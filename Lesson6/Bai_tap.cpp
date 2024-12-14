#include <iostream>
using namespace std;

bool kiemTraSoCP(int);
bool kiemTraSoNT(int);
int tongNT(int);


int main()
{
	cout << "Test 1.1. So chinh phuong -1(0) = " << kiemTraSoCP(-1) << endl;
	cout << "Test 1.1. So chinh phuong 0(1) = " << kiemTraSoCP(0) << endl;
	cout << "Test 1.1. So chinh phuong 1(1) = " << kiemTraSoCP(1) << endl;
	cout << "Test 1.1. So chinh phuong 2(0) = " << kiemTraSoCP(2) << endl;
	cout << "Test 1.1. So chinh phuong 3536(1) = " << kiemTraSoCP(3536) << endl;
	
	cout << endl;
	cout << "Test 1.2. So NT -1(0): " << kiemTraSoNT(-1) << endl;
	cout << "Test 1.2. So NT 1(0): " << kiemTraSoNT(1) << endl;
	cout << "Test 1.2. So NT 5(1): " << kiemTraSoNT(5) << endl;
	cout << "Test 1.2. So NT 8(0): " << kiemTraSoNT(8) << endl;
	cout << "Test 1.2. So NT 1000000007(0): " << kiemTraSoNT(1000000007) << endl;
	
	cout << endl;
	cout << "Test 2.1. Tong NT < n(10) = " << tongNT(10) << endl;
	cout << "Test 2.1. Tong NT < n(100) = " << tongNT(100) << endl;
	return 0;
}

/*
Bai 1.1. Viet ham kiem tra n co phai so chinh phuong
Input:
-n: int
Output:
-return bool
*/

bool kiemTraSoCP(int n)
{
	//Buoc 1: loc cac so ko phai so CP
	if (n < 0)
		return false;
	//Buoc 2: (i=0)^2, 1,2,3,4... == n
	for (int i = 0; i*i <= n; i++)
	{
		if(i*i == n)
			return true;
	}
	
	return false;
	
}


/*
Bai 1.2. Viet ham kiem tra n co phai so nguyen to
Input:
-n: int
Output:
-return bool
*/

bool kiemTraSoNT(int n)
{
	//Buoc 1: Quy uoc
	if (n <= 1)
		return false;
	
	//Buoc 2: 2-----> n-1
	for (int i = 2; i*i <= n - 1 ; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}


/*
Bai 2.1.Viet ham tinh tong cac so NT nho hon n
Input:
-n: int
Output:
-return int
-
*/

int tongNT(int n)
{
	int t = 0;
	
	for (int i = 1; i < n ; i++)
	{
		if (kiemTraSoNT(i))
		{
			t += i;
		}
		
	}
	
	return t;
}


/*
Bai 
Input:
-
-
Output:
-
-
*/

/*
Bai 
Input:
-
-
Output:
-
-
*/


