#include <iostream>
#include <cmath>
using namespace std;

bool laSoCP(int n) {
    if (n < 0) {
        return false;
    }
    
    int sqrtN = static_cast<int>(sqrt(n)); 
    return (sqrtN * sqrtN == n);          
}

int main() {
    int n;
    cout << "Nhap so n = ";
    cin >> n;

    if (laSoCP(n)) {
        cout << n << " la so chinh phuong\n";
    } else {
        cout << n << " khong phai la so chinh phuong \n";
    }

    return 0;
}
