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
int TinhTongCacPhanTuTamGiacTrenDuongCheoChinh(int a[][100], int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
			{
				tong += a[i][j];
			}
        }
    }
    return tong;
}
int TinhTongCacPhanTuTamGiacTrenDuongCheoPhu(int a[][100], int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j < n - 1)
			{
				tong += a[i][j];
			}
        }
    }
    return tong;
}
int TinhTongCacPhanTuTamGiacDuoiDuongCheoChinh(int a[][100], int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > j)
			{
				tong += a[i][j];
			}
        }
    }
    return tong;
}
int TinhTongCacPhanTuTamGiacDuoiDuongCheoPhu(int a[][100], int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j > n - 1)
			{
				tong += a[i][j];
			}
        }
    }
    return tong;
}
int main()
{
	int a[100][100], n;
	cout << "Nhap n: ";
	cin >> n;
	nhap(a, n);
	xuat(a, n);
	cout << TinhTongCacPhanTuTamGiacTrenDuongCheoChinh(a , n);
	cout << TinhTongCacPhanTuTamGiacTrenDuongCheoPhu(a , n);
	cout << TinhTongCacPhanTuTamGiacDuoiDuongCheoChinh(a , n);
	cout << TinhTongCacPhanTuTamGiacDuoiDuongCheoPhu(a , n);
	return 0;
}
