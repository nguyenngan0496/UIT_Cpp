#include <iostream>

using namespace std;

int main()
{
	float a, b, x;
	cout << "Hay nhap a, b" << endl;
	cin >> a >> b;
	
	if(a==0)
	{
		if(b==0)
		{
			printf("Phuong trinh %fx + %f = 0 co vo so nghiem", a, b) ;
		}
		else
		{
			printf("Phuong trinh %fx + %f = 0 vo nghiem", a, b);
		}
	}
	else
	{
		printf("Phuong trinh %fx + %f = 0 co nghiem x = %f/%f = %f",a, b, -b, a, -b/a) ;	
	}
	
	return 0;
}
