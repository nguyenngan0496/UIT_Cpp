#include <iostream>
#include <cmath>
using namespace std;

//Viet ham kiem tra tam giac
//input: canh a,b,c
//output: check tam giac vuong v, can c, deu d, thuong t

void checkTamGiac(int a, int b, int c){
	
	//check abc co phai tam giac
	if (a + b <= c || a + c <= b || b + c <= a){
		cout << "Day khong phai tam giac" << endl;
	
	}
	
	//check abc co phai tam giac vuong
	else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
		cout << "Day la giam giac vuong" << endl;
	}
	
	//check abc co phai tam giac deu
	else if (a==b && b==c){
		cout << "Day la tam giac deu" << endl;
	}
	
	//check abc co co phai tam giac can
	else if (a==b || a==c || b==c){
		cout << "Day la tam giac can" << endl;
	}
	
	
	//check tam giac thuong
	else {
		cout << "Day la tam giac thuong" << endl;
	}
}

int main()
{
	int a,b,c;
	cout << "Nhap do dai 3 canh a, b, c cua tam giac = " ;
	cin >> a >> b >> c;
	
	checkTamGiac(a,b,c);
	
	return 0;
}
