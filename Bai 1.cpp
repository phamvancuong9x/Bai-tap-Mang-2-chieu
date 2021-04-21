//1. Tính tổng cách phần tử lẻ nằm trên đường chéo chính và 
//đường chéo phụ của mảng 2 chiều a[dong][cot].
#include<iostream>
#define MAX 50
using namespace std;
void Nhap_so_dong(int &dong);
void Nhap_so_cot(int &cot);
void NhapMang(int a[MAX][MAX], int dong, int cot);
void XuatMang(int a[MAX][MAX], int dong, int cot);
int Tong_chinh_phu(int a[MAX][MAX], int dong, int cot);
int Tong_chinh_phu1(int a[MAX][MAX], int dong, int cot);
int main() {
	int a[MAX][MAX];
	int dong, cot;
	Nhap_so_dong(dong);
	Nhap_so_cot(cot);
	NhapMang(a, dong, cot);
	XuatMang(a, dong, cot);
	if(dong!=cot){cout<<"Khong ton tai duong cheo chinh phu";}
	else{
		cout<<"\t\t\n=========Tong duong cheo chinh phu=====\n";
	cout<<Tong_chinh_phu(a, dong, cot)<<endl;
		cout<<"\t\t\n=========Tong duong cheo chinh phu tru phan tu trung nhau=====\n";
	cout << Tong_chinh_phu1(a, dong, cot) << endl;}
	system("pause");
	return 0;
}
void Nhap_so_dong(int &dong) {
	do {
		cout << "Nhap so luong dong : "; cin >> dong;
	} while (dong <= 0 || dong > MAX);
}
void Nhap_so_cot(int &cot) {
	do { cout << "Nhap so luong cot : "; cin >> cot; }
	while (cot <= 0 || cot > MAX);
}
void NhapMang(int a[MAX][MAX], int dong, int cot) {
	cout << "\t\t\n============Nhap Mang==========\n";
	for (int i = 0; i < dong; i++) {
		for (int j = 0; j< cot; j++) {
			cout << "Nhap phan tu a[" << i << "][" << j << "] :";
			cin >> a[i][j];
		}
	}
}
void XuatMang(int a[MAX][MAX], int dong, int cot) {
	cout << "\t\t\n============Xuat Mang==========\n";
	for (int i = 0; i < dong; i++) {
		for (int j = 0; j < cot; j++) {
			cout<< a[i][j]<<"  ";
		}
		cout << endl;
	}
}
int Tong_chinh_phu(int a[MAX][MAX], int dong, int cot) {
	cout << "\t\t\n============Tong duong cheo chinh phu====\n";
	int tong = 0;
	for (int i = 0; i < dong; i++) {
		for (int j = 0; j < cot; j++) {
			if (i == j) {
				tong += a[i][j];
			}
			if (i + j + 1 == dong) {
				tong += a[i][j];
			}
		}
	}
	return tong;
}
//th2
int Tong_chinh_phu1(int a[MAX][MAX], int dong, int cot) {
	cout << "\t\t\n============Tong duong cheo chinh phu====\n";
	int tong = 0;
	for (int i = 0; i < dong; i++) {
		for (int j = 0; j < cot; j++) {
			if (i == j) {
				tong += a[i][j];
			}
			if ((i + j + 1 == dong)&(i!=j)) {
				tong += a[i][j];
			}
		}
	}
	return tong;
}
