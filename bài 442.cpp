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
int TinhTongCacPhanTuChanNamTrenBien(int a[][100], int n)
{
    int S = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[0][i] % 2 == 0)
        {
            S += a[0][i];
        }
        if(a[n - 1][i] % 2 == 0)
        {
            S += a[n - 1][i];
        }
    }
    for(int i = 1; i < n - 1; i++)
    {
        if(a[i][0] % 2 == 0)
        {
            S += a[i][0];
        }
        if(a[i][n - 1] % 2 == 0)
        {
            S += a[i][n - 1];
        }
    }
    return S;
}
int main()
{
	int a[100][100], n;
	cout << "Nhap n: ";
	cin >> n;
	nhap(a, n);
	xuat(a, n);
	cout << TinhTongCacPhanTuChanNamTrenBien(a, n);
	return 0;
}
