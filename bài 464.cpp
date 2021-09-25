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
void TinhTongCacDong(int a[][100], int n, int b[])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            b[i] += a[i][j];
        }
    }
}
void HoanVi(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void HoanVi2Dong(int a[][100], int n, int dong1, int dong2)
{
    for(int j = 0; j < n; j++)
    {
        HoanVi(a[dong1][j], a[dong2][j]);
    }
}
void SapXepCacDongDuaVaoTongCacPhanTuTrong1Dong(int a[][100], int n)
{
    int b[100] = {0};
    TinhTongCacDong(a, n, b);
    for (int i = 0; i < n - 1; i++)  
    {   
        for (int j = i + 1; j < n; j++)   
        {    
            if (b[i] > b[j])    
            {
                HoanVi2Dong(a, n, i, j);
                HoanVi(b[i], b[j]);
            }
        }
    }
}
int main()
{
	int a[100][100], n;
	cout << "Nhap n: ";
	cin >> n;
	nhap(a, n);
	xuat(a, n);
	SapXepCacDongDuaVaoTongCacPhanTuTrong1Dong(a, n);
	cout << "Mang sau khi bien doi: ";
	xuat(a, n);
	return 0;
}
