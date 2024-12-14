#include <iostream>

using namespace std;

#define SIZE 100
const int Size = 108;

int main()
{

int tuoiOng, tuoiBa, tuoiCha, tuoiMe, tuoiToi, tuoiVo;

int tuoi[80]; //index 0...79

int b[100];

float c[Size];

int x = 10;

int d[] = {6, 2, 9, 6, 5};

//			 0  1  2  3  4
int a[50] = {8, 2, 9, 1, 9};

cout << a[2] << endl;
a[2] = 10;

a[5] = a[0] + a[2] - 1;

cout << "a[5] = " << a[5] << endl; 

return 0;
}
