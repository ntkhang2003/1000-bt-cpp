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
int TimGiaTriGanNhauNhat(int a[][100], int n)
{
	int Min = abs(a[0][0] - a[0][1]), m = n*n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (abs(a[i/n][i%n] - a[j/n][j%n]) < Min)
			{
				Min = abs(a[i/n][i%n] - a[j/n][j%n]);
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
	cout << TimGiaTriGanNhauNhat(a ,n);
	return 0;
}
