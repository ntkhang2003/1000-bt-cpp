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
void DuaChanVeDau(int a[][100], int n, int b[])
{
	int index = 0;
	for (int i = 0; i < n; i++) // Biến ma trận thành mảng
	{
		for (int j = 0; j < n; j++)
		{
			b[index++] = a[i][j];
		}
	}
	for (int ViTriDoi = 0; ViTriDoi < index; ViTriDoi++) // Đưa chẵn về đầu mảng
	{
		if (b[ViTriDoi] % 2 == 0)
		{
			int temp = b[ViTriDoi];
    		for (int k = ViTriDoi; k > 0; k--)
   			{
       			b[k] = b[k - 1];
    		}
    		b[0] = temp;
		}
	}
	index = 0;
	for (int m = 0; m < n; m++) // Biến mảng thành ma trận lại
	{
		for (int l = 0; l < n; l++)
		{
			a[m][l] = b[index++];
		}
	}
}
int main()
{
	int a[100][100], n, b[100];
	cout << "Nhap n: ";
	cin >> n;
	nhap(a, n);
	xuat(a, n);
	DuaChanVeDau(a, n, b);
	cout << "Mang sau khi bien doi: " << endl;
	xuat(a, n);
	return 0;
}
