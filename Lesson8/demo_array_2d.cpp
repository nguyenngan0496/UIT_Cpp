#include <iostream>

using namespace std;

const int DONG = 5;
const int COT = 6;

void printArray(int a[5][6],int dong, int cot)
{
	cout << "\nArray ["<< dong <<"]["<< cot<<"]:" << endl; 
		for (int i = 0; i < dong; i++)
		{
			for (int j = 0; j < cot;j++)
			{
				cout << a[i][j] << "";
			}
		cout << endl;
	};
}


void cinArray(int b[][COT], int& dong_b, int& cot_b)
{
	cout << "Ban muon nhap bao nhieu dong: ";
	cin >> dong_b;
	
	cout << "Ban muon nhap bao nhieu cot: ";
	cin >> cot_b;
	
	for (int i = 0; i < dong_b; i++)
	{
		for (int j = 0; j < cot_b; j++)
		{
			cout << "\tNhap [" << i <<"]["<< j << "] = ";
			cin >> b[i][j]; 
		}
	}
}

/*Yeu cau: Viet ham tim mot gia tri x co trong mang hay ko?
Phan tich:
Input:
	+Mang 2D a => int a[][COT]
	+So luong dong => int dong
	+So luong cot => int cot
	+Gia tri x can tim => int x
	
Output:
	+True/False => return bool
*/

bool searchValue(int a[][COT], int dong, int cot, int value)
{
	for(int i = 0; i < dong; i++)
	{
		for(int j = 0; j < cot; j++)
		{
			if(a[i][j] == value)
				return true;
		}
	}
	return false;
}
/*Yeu cau: Viet ham tim mot gia tri duong co trong mang 
Phan tich:
Input:
	+Mang 2D a => int a[][COT]
	+So luong dong => int dong
	+So luong cot => int cot
	
Output:
	+mang 1d luu cac gia tri duong => int kq[]
	+so luong mang kq			   => int& sl_kq;
*/

void timGTDuong(int a[][COT], int dong, int cot, int kq[], int& sl_kq)
{
	sl_kq = 0;
	for(int i = 0; i < dong; i++)
	{
		for(int j = 0; j < cot; j++)
		{
			if(a[i][j] > 0)
				kq[sl_kq] = a[i][j];
				sl_kq++;
		}
	}
	cout << "Cac gia tri duong trong mang: ";
    for (int i = 0; i < sl_kq; i++) {
        cout << kq[i] << " " ;
    }
}


int main()
{
	
	int a[DONG][COT] = {
					{1,3,5,7},
					{2,4,6,8},
					{6,7,8,9},
					
				};
				
	int dong = 3;
	int cot = 4;
	
	
	cout << "\nTest: 2.In mang:" << endl;
	//printArray(a,dong,cot);
	
	cout << "\nTest: 3. Tim gia tri co trong mang:" << endl;
	cout << "\tKet qua tim 8(1) = " << searchValue(a,dong,cot,8)<< endl;
	cout << "\tKet qua tim 10(1) = " << searchValue(a,dong,cot,10)<< endl;
	
	cout << "\nTest: 4. Tim cac gia tri duong trong mang 2 chieu:"<< endl;
	
	int c[DONG*COT];
	int m = 0;
	timGTDuong(a, dong,cot,c,m);
	
	
	/*for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot;j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	};*/
	
	
	int b[DONG][COT];
	int dong_b = 0;
	int cot_b = 0;
	
	//cinArray(b, dong_b, cot_b);
	
	//printArray(b, dong_b, cot_b);
	
	return 0;
}
