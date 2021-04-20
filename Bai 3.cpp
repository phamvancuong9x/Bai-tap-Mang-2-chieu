/*Viết chương trình C++ để nhập và hiển thị tam giác Pascal.
Chắc bạn đã khá quen thuộc với tam giác Pascal rồi, ở đây, hàng đầu tiên và
thứ hai được thiết lập là 1. Bắt đầu từ hàng thứ ba trở đi, mỗi phần tử là 
tổng của phần tử ngay trên nó và phần tử bên trái của phần tử ngay trên đó.

Kích thước pascal: 6
1
1  1
1  2  1
1  3  3   1
1  4  6   4   1
1  5  10  10  5 1   */
#include<iostream>
#define MAX 100
using namespace std;
void KichThuoc(int &n);
void PhanTuMang(int a[MAX][MAX], int n);
void XuatMang(int a[MAX][MAX], int n);
int main() {
	int a[MAX][MAX];
	int n;
	KichThuoc(n);
	PhanTuMang(a,n);
	XuatMang(a,n);
	system("pause");
	return 0;
}
void KichThuoc(int &n) {
	do {
		cout << "Nhap kich thuoc pacal : ";
		cin >> n;
	} while (n <= 0 || n> MAX);
}
void PhanTuMang(int a[MAX][MAX], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((i == j)||(j==0)) { a[i][j] = 1; }
			else { a[i][j] = a[i - 1][j] + a[i - 1][j - 1]; }
		}
	}
}
void XuatMang(int a[MAX][MAX], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i >= j) { cout << a[i][j] << "   "; }
			
		}cout << endl;
	}
}