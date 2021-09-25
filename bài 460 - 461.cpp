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
void HoanVi(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void SapXepCheoChinhTangDan(int a[][100], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if (a[i][i] > a[j][j])
			{
				HoanVi(a[i][i], a[j][j]);
			}
        }
    }
}
void SapXepCheoPhuGiamDan(int a[][100], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if (a[i][n-1-i] < a[j][n-j-1])
			{
				HoanVi(a[i][i], a[j][j]);
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
	SapXepCheoChinhTangDan(a, n);
	cout << "Mang sau khi bien doi: ";
	xuat(a, n);
	return 0;
}
