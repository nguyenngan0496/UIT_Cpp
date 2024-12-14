#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	"Hello world!";
	
	char s1[100]; //Thu Duc
	char s2[100] = {'T','h','u',' ','D','u','c','\0'};
	
	char s4[100] = "Thu Duc";
	cout << s4 << endl;
	
	for(int i = 0; i < strlen(s4) ; i++)
	{
		if(s4[i] >= 'A' && s4[i] <= 'Z') 
		cout << s4[i] << endl;
	}
	
	return 0;
}
