/*nhập và hiển thị một ma trận có kích thước là 5x5, trong đó : các phần tử trên 
đường chéo được điền giá trị 0, các phần tử của tam giác dưới đường chéo được 
điền các giá trị - 1, và ở tam giác trên là được điền với các giá trị 1.

  0   1   1   1  1
- 1   0   1   1  1
- 1 - 1   0   1  1
- 1 - 1 - 1   0  1
- 1 - 1 - 1 - 1  0  */
#include<iostream>
#define MAX 100
using namespace std;
void NhapSoDongCot(int &dong,int &cot);
void PhanTuMang(int a[MAX][MAX], int dong, int cot);
void XuatMang(int a[MAX][MAX], int dong, int cot);
int main() {
	int a[MAX][MAX];
	int dong, cot;
	NhapSoDongCot(dong,cot);
	PhanTuMang(a, dong, cot);
	XuatMang(a, dong, cot);
	system("pause");
	return 0;
}
void NhapSoDongCot(int &dong,int &cot ) {
	do {
		cout << "Nhap so dong : ";
		cin >> dong;
	} while (dong <= 0 || dong > MAX);
	do {
		cout << "Nhap so cot : ";
		cin >> cot;
	} while (cot <= 0 || cot > MAX||cot!=dong);
}
void PhanTuMang(int a[MAX][MAX], int dong, int cot) {
	for (int i = 0; i < dong; i++) {
		for (int j = 0; j < cot; j++) {
			if (i == j) { a[i][j] = 0; }
			else if (i < j) { a[i][j] = 1; }
			else { a[i][j] = -1; }
		}
	}
}
void XuatMang(int a[MAX][MAX], int dong, int cot) {
	for (int i = 0; i < dong; i++) {
		for (int j = 0; j < cot; j++) {
			if (i <= j) { cout << a[i][j] << "   "; }
			else{  cout << a[i][j] << "  "; } 
		}cout << endl;
	}
}
