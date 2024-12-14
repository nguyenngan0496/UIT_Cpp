#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//Gia tri ngau nhien thuoc doan [-39,79]
//So luong dong va cot [4,12]

/*Ham kiem tra so nguyen to
Input: so n
Output: true/false
*/


bool kiemTraSNT(int n)
{
	if (n <= 1) 
	{
		return false;
	}
	for (int i = 2; i*i <= n; i++)
	{
		if (n%i == 0)
		{
			return false;
		}
	}
	return true;
}

bool kiemTraToanChan(int matrix[12][12], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] % 2 != 0) { 
                return false;
            }
        }
    }
    return true; 
}

int main()
{
	srand(time(0));
	
	//1.Tao mang vuong random [4,12]
	int size = rand()%9 + 4;
	int matrix[size][size];
	
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			matrix[i][j] = rand()%119 -39;
		}
	}
	
	//2.In ra mang co so luong dong va cot [4,12], Gia tri ngau nhien thuoc doan [-39,79]
	cout << "2.Mang 2D voi gia tri ngau nhien trong khoang [-39,79]" << endl;
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			cout << matrix[i][j] << "  " ;
		}
		cout << endl;
	}
	
	//3.Tim phan tu lon nhat
	int maxElement = matrix[0][0];
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			if (matrix[i][j] > maxElement)
			{
				maxElement = matrix[i][j];
			}
		}
	}
	cout << "\n3.Phan tu lon nhat = " << maxElement ;
	
	//4.Dem so nguyen to co trong mang
	int soLuongSNT = 0;
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size ; j++){
			if(kiemTraSNT(matrix[i][j]))
				soLuongSNT++;
			}
		}
	
	cout << "\n4.So luong so nguyen to trong mang = " << soLuongSNT << endl;
	
	//5.In ra cac phan tu nam phia tren duong cheo chinh
	cout << "\n5.Cac phan tu nam tren duong cheo chinh = ";
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size ; j++){
			if(i < j)
				cout << matrix[i][j] << " ";
			}
		}
	cout << endl;
	
	
	//10.Tim gia tri nho nhat tren tung dong cua mang
	cout << "\n10.Gia tri nho nhat cua tung dong:" << endl;
	for (int i = 0; i < size; i++)
	{
		int minRow = matrix[i][0];
		for (int j = 0; j < size; j++)
		{
			if(matrix[i][j] < minRow){
				minRow = matrix[i][j];
			}
		}
		cout << "Dong " << i + 1 << " co gia tri nho nhat = " << minRow << endl;
	}
	
	//11.Tim gia tri lon nhat tren tung cot cua mang
	cout << "\n11.Gia tri lon nhat cua tung cot:" << endl;
	for (int j = 0; j < size; j++)
	{
		int maxCol = matrix[0][j];
		for (int i = 0; i < size; i++)
		{
			if(matrix[i][j] > maxCol){
				maxCol = matrix[i][j];
			}
		}
		cout << "Cot " << j + 1 << " co gia tri lon nhat = " << maxCol << endl;
	}
	
	//12.Kiem tra mang co toan chan?
	
    int matrix[12][12];
    if (kiemTraToanChan(matrix, size)) {
        cout << "\nMang toan chan." << endl;
    } else {
        cout << "\nMang khong toan chan." << endl;
    }
	

	
	return 0;
}
