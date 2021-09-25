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
int TinhTongCacPhanTuTamGiacTrenDuongCheoChinh(int a[][100], int dong, int cot)
{
    int tong = 0;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (i < j)
			{
				tong += a[i][j];
			}
        }
    }
    return tong;
}
int TinhTongCacPhanTuTamGiacTrenDuongCheoPhu(int a[][100], int dong, int cot)
{
    int tong = 0;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (i + j < dong - 1)
			{
				tong += a[i][j];
			}
        }
    }
    return tong;
}
int TinhTongCacPhanTuTamGiacDuoiDuongCheoChinh(int a[][100], int dong, int cot)
{
    int tong = 0;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (i > j)
			{
				tong += a[i][j];
			}
        }
    }
    return tong;
}
int TinhTongCacPhanTuTamGiacDuoiDuongCheoPhu(int a[][100], int dong, int cot)
{
    int tong = 0;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (i + j > dong - 1)
			{
				tong += a[i][j];
			}
        }
    }
    return tong;
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
	cout << TinhTongCacPhanTuTamGiacTrenDuongCheoChinh(a , dong, cot);
	cout << TinhTongCacPhanTuTamGiacTrenDuongCheoPhu(a , dong, cot);
	cout << TinhTongCacPhanTuTamGiacDuoiDuongCheoChinh(a , dong, cot);
	cout << TinhTongCacPhanTuTamGiacDuoiDuongCheoChinh(a , dong, cot);
	return 0;
}
