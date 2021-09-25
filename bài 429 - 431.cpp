#include <iostream>
#include <cmath>
using namespace std;
void nhap(int a[][100], int dong, int cot)
{
	for (int i = 0; i < dong; i++){
		for (int j = 0; j < cot; j++){
			cout << "Nhap a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}
void xuat(int a[][100], int dong, int cot)
{
	for (int i = 0; i < dong; i++){
		for (int j = 0; j < cot; j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}	
	
}
void XuatPhanTu(int a[][100], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (i == j) // đg chéo chính
			// (i < j) tam giác trên đg chéo chính
			// (i > j) tam giác dưới đg chéo chính
			// (i + j == dong - 1) đg chéo phụ
			// (i + j < dong - 1) tam giác trên đg chéo phụ
			// (i + j > dong - 1) tam giác trên đg chéo chính
			{
				cout << a[i][j] << " ";
			}
		}
	}
}
int main()
{
	int a[100][100], dong, cot;
	cout << "Nhap so dong: ";
	cin >> dong;
	cout << "Nhap so cot: ";
	cin >> cot;
	nhap(a, dong, cot);
	xuat(a, dong, cot);
	XuatPhanTu(a, dong, cot);
	return 0;
}
