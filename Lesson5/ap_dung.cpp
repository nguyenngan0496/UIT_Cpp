#include <iostream>

using namespace std;

//Viet ham cong 2 so nguyen a va b

//Cach 3
int cong3(int a, int b)
{
	int tong = a + b;
	
	return tong;//khi return dc goi thi stop va return kqua
	
}


//Cach 2
int cong2()
{
	int a, b;
	cout << "Nhap a = ";
	cin >> a;
	
	cout << "Nhap b = ";
	cin >> b;
	
	int tong = a + b;
	
	return tong; //khi return dc goi thi stop va return kqua
}//Ham nay co the dc lay kqua de tai su dung

//Cach 1
void cong1()
{
	int a, b;
	cout << "Nhap a = ";
	cin >> a;
	
	cout << "Nhap b = ";
	cin >> b;
	
	int tong = a + b;
	
	cout << "Tong = " << tong << endl << endl;
}//Ham nay chi nhin thay ket qua, ko tai su dung dc

/////////////Chay chtrinh
int main()
{
	//Goi theo cach 3
	int kq1 = cong3(2,3);
	cout << "1.Ket qua tong = " << kq1 << endl << endl;
	
	int x = 6, y = 9;
	int kq2 = cong3(x,y);
	cout << "2.Ket qua tong = " << kq2 << endl << endl;
	
	cout << "3. Ket qua tong = " << cong3(kq1, kq2) << endl << endl;
	
	//Goi theo cach 2
	int t = cong2();
	cout << "Ket qua tong = " << t << endl << endl;
	
	//Goi theo cach 1
	//cong1();
	//cong1();

	return 0;
}
