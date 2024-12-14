#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

const int Size = 10;

void printArr(int a[Size], int n)
{
	cout << "Array [" << n << "] : " << endl;
	for(int i = 0; i < n; i++)
	{
	cout << a[i] << "   ";
	}
	cout << endl;	
}

void cinArr(int a[], int& n)
{
	cout << "Nhap so phan tu mang n = ";
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void autoArr(int a[], int& n)
{
	//n se 3...8 = 3 + [0;5]
	n = 3 + rand()%6;
	
	for(int i = 0; i < n;i++)
	{
		//value [10;30] = 10 + [0;20]
		a[i] = 10 + rand()%21;
	}
}

/*Yeu cau: Viet ham tim kiem mot gia tri co trong mang hay ko
Input: 
+a[]: int
+n: int
+value: int

Output:
+return bool
*/

bool searchValue (int a[], int n, int value)
{
	for(int i = 0; i < n; i++)
	{
		if (a[i] == value)
			return true;
	}
	return false;
}

/*Yeu cau: Viet ham dem cac gia tri am, chan~ co trong mang?
Input:
+a[]: int
+n: int

Output:
+return sl am
+sl_chan: int&
*/

int demSlAmSlChan(int a[], int n, int& demChan)
{
	int demAm = 0;
	demChan = 0;
	
	for(int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			demAm++;
		}
		
		if (a[i] % 2 == 0)
		{
			demChan++;
		}
	}
	return demAm;
}

/*Yeu cau: Viet ham tim max?
Input:
+Mang a     => int a[]
+So luong n => int n

Output
+Gia tri lon nhat => return gia tri

*/
int maxArr(int a[], int n)
{
	int m = a[0];
	for(int i = 1; i < n; i++)
	{
		if (a[i] > m)
			m = a[i];
	}
	return m;
}


int main()
{
	int a[Size] = {36, -26, 79, 59, -66, 99, 11, 39};
	int n = 8;
	
	
	
	cout << "\nTest: Y/c 1. In mang: " << endl;
	printArr(a,n);
	
	cout << "\nTest: Y/c 2. Tim gia tri 59(1): " << searchValue(a,n,59) << endl;
	cout << "\nTest: Y/c 2. Tim gia tri 31(0): " << searchValue(a,n,31) << endl;
	
	cout << "\nTest: Y/c 3. Dem gia tri am va dem gia tri chan: " << endl;
	int am,chan;
	am = demSlAmSlChan(a,n,chan);
	cout << "\tSo luong am(2): " << am << endl;
	cout << "\tSo luong chan(3): " << chan << endl;
	
	cout << "\nTest: Y/c 4. Tim max (99): " << maxArr(a,n) << endl;
	cout << "\nTest: Y/c" << endl;
	
	
	
	return 0;
}
