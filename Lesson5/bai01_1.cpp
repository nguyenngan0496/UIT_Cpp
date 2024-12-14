#include <iostream>
#include <cmath>

using namespace std;

/*Viet ham kiem tra so n co phai so chinh phuong
Input: 
	+n: int

Output:
	+return bool
*/

bool kiemTraSoChinhPhuong(int n)
{
	int canBacHain = sqrt(n);
	
	return (canBacHain*canBacHain == n);
}

int main()
{
	bool kq = kiemTraSoChinhPhuong(20);
	
	if(kq)
	{
		cout << "n la so CP" << endl;
	}
	else{
		cout << "n ko la so CP" << endl;
	}
	
	return 0;
}


/*Viet ham ve (in) hinh chu nhat bang cac dau *
Input: 
	+a:  
	+b:

Output:
	+cout
*/


/*(viet yeu cau vao day)
Input: 
	+
	+
	
Output:
	+
	+
*/


