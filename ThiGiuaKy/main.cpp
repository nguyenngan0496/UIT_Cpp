#include <iostream>
#include <cmath>

using namespace std;

/*Ho ten: Nguyen Thi Kim Ngan
MSSV: 24210157*/

//Bai 1
//Cau 1
/*Yeu cau: Viet ham tinh gia tri bieu thuc F(n) 
Input:
+n: int
Output:
+return ketQuaF: int
*/
int tinhF(int n)
{	
	int ketQuaF = 0;
	for(int i = 1; i <= n; i++)
	{
		int ketQuaTam = 0;
		for(int j = 1; j <= i; j++)
		{
			ketQuaTam += j;
		}
		ketQuaF += ketQuaTam;
		
	}
	
	return ketQuaF;
}

//Cau 2
/*Yeu cau: Viet ham kiem tra n
Input:
+n: int
Output:
+Am-Chan: return true
+Others: return false
*/

bool kiemTraN(int n)
{
	if(n < 0 && n % 2 == 0)
	return true;
	else return false;
}

//Bai 2
//Cau 1
/*Yeu cau: Viet ham in tat ca phan tu trong mang
*/
void printMang(float a[], int n)
{
	cout << "\tCac phan tu trong mang la: ";
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	
}
//Cau 2
/*Yeu cau:Viet ham thuc hien: tinh tich cac so am, tim so duong nho nhat trong mang
Input:
+mang A: float
+n: int
Output:
+tich cac so am: float
+so duong nho nhat: float
*/
void tinhMang(float a[], int n, float& tichAm, float& minDuong)
{
	//Tinh tich cac so am
	tichAm = 1;
	minDuong = -1;
	bool coSoDuong = false;
	
	for(int i = 0; i < n; i++)
	{
		if(a[i] < 0)
		{
			tichAm *= a[i];
		}
		
		if(a[i] > 0)
		{
			if(!coSoDuong){
				minDuong = a[i];
				coSoDuong = true;
			} else if(a[i] < minDuong){
				minDuong = a[i];
			}
		}
	}

}
//Cau 3
/*Yeu cau:
Input:
+
+
Output:
+
+
*/

//Bai 3
//Cau 1
/*Yeu cau: Viet ham in ma tran
*/
void printMaTran(float a[][5], int hang, int cot)
{
	cout << "\tMa tran co cac phan tu la:" << endl;
	for(int i =0; i < hang; i++)
	{
		for(int j = 0; j < cot; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}
//Cau 2
/*Yeu cau: Viet ham tim gia tri chan nho nhat
Input:
+maTran: float
+hang, cot: int
Output:
+minChan: float
*/
float timMinChan(float a[][5], int hang, int cot)
{
	float minChan = -1;
	bool coSoChan = false;
	
	for(int i = 0; i< hang; i++)
	{
		for(int j = 0; j < cot; j++)
		{
			int phanNguyen = (int)a[i][j];
			if (phanNguyen % 2 == 0)
			{
				if(!coSoChan)
				{
					minChan = a[i][j];
					coSoChan = true;
				} 
				else if (a[i][j] < minChan)
				{
					minChan = a[i][j];
				}
			}
		}
	}
	return minChan;
}

//Bai 3
//Cau 1
/*Yeu cau: Viet ham in diem toa do
*/
struct Diem {
	double x;
	double y;
};

void printDiem(const Diem &d)
{
	cout << "(" << d.x << ", " << d.y << ")";
}


int main()
{
	cout << "=====BAI 1=====" << endl;
	cout << "=====Test: Cau 1." << endl;
	cout << "\tF(15) = " << tinhF(15) << endl;
	cout << "\tF(29) = " << tinhF(29) << endl;
	cout << "\tF(1234) = " << tinhF(1234) << endl;
	
	cout << "=====Test: Cau 2." << endl;
	cout << "\tTruong hop 80(0):  " << kiemTraN(80) << endl;
	cout << "\tTruong hop -98(1):  " << kiemTraN(-80) << endl;
	cout << "\tTruong hop 101(0):  " << kiemTraN(101) << endl;
	
	cout << "\n=====BAI 2=====" << endl;
	cout << "=====Test: Cau 1. " << endl;
	float mangBaiHai[50] = {16.2, 99.4, -51.6, 98.5, -79.6, 68.3, -34.8, 91.6, -97.4, 40.8};
	int n = 10;
	printMang(mangBaiHai,n);
	cout << "\n=====Test: Cau 2. " << endl;
	float ketQuaTichAm, minDuong;
	tinhMang(mangBaiHai, n, ketQuaTichAm,minDuong);	
	cout << "\tTich cac so am trong mang = " << ketQuaTichAm << endl;	
	cout << "\tSo duong nho nhat trong mang = " << minDuong << endl;	
	
	cout << "\n=====BAI 3=====" << endl;
	float maTran[5][5] = {
		{9.9, 4.4, 8.9, 2.6, 6.3},
        {5.5, 5.8, 3.5, 1.5, 9.4},
        {1.4, 4.5, 7.3, 8.7, 7.4},
        {6.9, 3.4, 1.1, 9.8, 6.9},
        {5.0, 2.2, 5.3, 7.7, 1.9}
	};
	int hang = 5;
	int cot = 5;
	cout << "=====Test: Cau 1. " << endl;
	printMaTran(maTran, hang, cot);	
	
	cout << "=====Test: Cau 2. " << endl;
	float minChan = timMinChan(maTran, hang, cot);
	cout << "Gia tri chan nho nhat la: " << minChan << endl;

	cout << "\n=====BAI 4=====" << endl;
	Diem arr[] = {{1.5, 2.4}, {7, 5}, {3, 5}, {2.4, 1.5}};
    int m = sizeof(arr) / sizeof(arr[0]);
	cout << "=====Test: Cau 1. " << endl;
	cout << "Danh sach cac diem:\n";
    for (int i = 0; i < m; i++) {
        printDiem(arr[i]);
        cout << "\n";
    }
	return 0;
}
