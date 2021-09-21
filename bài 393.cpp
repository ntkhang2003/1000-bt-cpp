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
void HoanVi(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void HoanVi2Cot(int a[][100], int dong, int cot, int n, int m)
{
	for (int i = 0; i < dong; i++){
		HoanVi(a[i][n], a[i][m]);
	}
}
int main()
{
	int a[100][100], dong, cot, n, m;
	cout << "Nhap so dong: ";
	cin >> dong;
	cout << "Nhap so cot : ";
	cin >> cot;
	nhap(a, dong, cot);
	cout << "Nhap 2 cot can hoan vi: ";
	cin >> n >> m;
	HoanVi2Cot(a, dong, cot, n, m);
	xuat(a, dong, cot);
	return 0;
}
