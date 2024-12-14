#include <iostream>
using namespace std;

/*Viet ham tinh gia tri bieu thuc: S(n) = 1 + 3 + 5 +... +n (n la so le)
Input: 
-n: int
Output:
-tong S: int

*/
int tongS(int n)
{
	int S = 0;
	for(int i = 1; i <= n; i = i+2)
	{
		S += i;
	}
	cout << S;
	return S;
}

int main()
{
	int n;
	cout << "Hay nhap n = ";
	cin >> n;
	
	while(n % 2 == 0)
	{
		cout << "Hay nhap lai n la so le = " << endl;
		cin >> n;
	}
	
	int result = tongS(n);
	cout << "Tong S = " << result << endl;
	
	return 0;
}
