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
void DichTraiXoayVongTheoChieuKimDongHoCacGiaTriNamTrenBien(int a[][100], int dong, int cot)
{
    int i, j;
    int temp = a[0][0]; 
    for(i = 0, j = 0; j < cot - 1; j++)
    {
        a[i][j] = a[i][j + 1];
    }
    for(i, j; i < dong - 1; i++)
    {
        a[i][j] = a[i + 1][j];
    }
    for(i, j; j > 0; j--)
    {
        a[i][j] = a[i][j - 1];
    }
    for(i, j; i > 1; i--)
    {
        a[i][j] = a[i - 1][j];
    }
    a[1][0] = temp;
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
	DichTraiXoayVongTheoChieuKimDongHoCacGiaTriNamTrenBien(a, dong, cot);
	xuat(a, dong, cot);
	return 0;
}
