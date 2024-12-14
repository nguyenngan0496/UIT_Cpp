#include <iostream>

using namespace std;

int main()
{
	float gpa;
	cout << "Nhap diem:";
	cin >> gpa;
	
	//3.5 <= GPA < 5.0
	if(gpa < 3.5)
	{
		cout << "Hoc luc kem" << endl;
	}
	else if(gpa >= 3.5 && gpa < 5.0)
	{
		cout << "Hoc luc yeu" << endl;
	}
	else if(gpa >= 5.0 && gpa < 7.0)
	{
		cout << "Hoc luc trung binh" << endl;
	}
	else if(gpa >= 7.0 && gpa <8.0)
	{
		cout << "Hoc luc kha" << endl;
	}
	else if(gpa >= 8.0 && gpa <9.0)
	{
		cout << "Hoc luc gioi" << endl;
	}
	else if(gpa >= 9.0)
	{
		cout << "Hoc luc xuat sac" << endl;
	}
	
	return 0;

}
