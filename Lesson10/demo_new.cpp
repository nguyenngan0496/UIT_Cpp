#include <iostream>
using namespace std;

int main()
{
	int* p = new int(6789);//cap phat dong
	//*p = 6789; 
	//truoc khi thu hoi
	cout << "1.Dia chi: " << p << " Gia tri: " << *p << endl; //uu diem: neu ko dung toi thi thu hoi dc
	
	delete p;
	
	//p = NULL;
	
	//sau khi thu hoi
	cout << "2.Dia chi: " << p << " Gia tri: " << *p << endl;
	
	double* p2 = new double;
	return 0;
}
