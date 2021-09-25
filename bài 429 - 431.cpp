#include <iostream>
#include <cmath>
using namespace std;
void nhap(int a[][100], int n)
{
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << "Nhap a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}
void xuat(int a[][100], int n)
{
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}	
	
}
void XuatPhanTu(int a[][100], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j) // đg chéo chính
			// (i < j) tam giác trên đg chéo chính
			// (i > j) tam giác dưới đg chéo chính
			// (i + j == n - 1) đg chéo phụ
			// (i + j < n - 1) tam giác trên đg chéo phụ
			// (i + j > n - 1) tam giác trên đg chéo chính
			{
				cout << a[i][j] << " ";
			}
		}
	}
}
int main()
{
	int a[100][100], n;
	cout << "Nhap n: ";
	nhap(a, n);
	xuat(a, n);
	XuatPhanTu(a, n);
	return 0;
}
