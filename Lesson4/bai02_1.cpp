#include <iostream>
using namespace std;

int main()
{
	int n;
	do{
		cout << "Hay nhap n = ";
		cin >> n;
	}while(n<=0);
	
	int t = 0;
	
	for(int i = 1; i <= n ; i++)
	{
		t += i;//t = t + i

	}
	
	cout << "Ket qua = " << t << endl;
	
	return 0;
}
