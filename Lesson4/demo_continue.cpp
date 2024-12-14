#include <iostream>
using namespace std;

int main()
{
	for(int i = 1; i <= 50; i++)
	{
		if(i == 26 || i == 39)
			continue;
		
		
		cout << i << endl;//cout nay ko lien quan if ben tren
	}
	
	return 0;
}
