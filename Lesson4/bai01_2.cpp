#include <iostream>
using namespace std;

int main()
{
	/*
	2x1 = 2
	2x2 = 4
	...
	...
	2x10 = 20
	*/
	for(int j = 2; j <=9 ; j++)
	{
		for(int i = 1; i <=10 ;i++)
		{
		printf("%d x %d = %d\n", j, i, j*i);
		}
		cout << endl << endl;
	}
	
	
	return 0;
}
