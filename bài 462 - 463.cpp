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
void HoanVi2Dong(int a[][100], int n, int dong1, int dong2)
{
	for(int j = 0; j < n; j++)
    {
        HoanVi(a[dong1][j], a[dong2][j]);
    }
    
}
void HoanVi2Cot(int a[][100], int n, int cot1, int cot2)
{
	for (int i = 0; i < n; i++)
	{
		HoanVi(a[i][cot1], a[i][cot2]);
	}
}
int main()
{
	int a[100][100], n, dong1, dong2, cot1, cot2;
	cout << "Nhap n: ";
	cin >> n;
	nhap(a, n);
	xuat(a, n);
	cin >> dong1 >> dong2 >> cot1 >> cot2;
	HoanVi2Dong(a, n, dong1, dong2);	
	//HoanVi2Cot(a, n, cot1, cot2);
	cout << "Mang sau khi bien doi: ";
	xuat(a, n);
	return 0;
}
