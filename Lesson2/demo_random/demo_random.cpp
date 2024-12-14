#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(0));
	cout << "Random:" << rand()%10 << endl; //0 -> 32767
	
	//[10;50] = 10 + [0;40]
	
	cout << 10 + rand()%41 << endl;
	
	return 0;
	
}
