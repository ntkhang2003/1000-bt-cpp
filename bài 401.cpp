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
void HoanVi2So(int &a, int &b)
{
    int temp = a;
	a = b;
	b = temp;
}
void HoanVi2Cot(int a[][100], int x, int y, int dong)
{
    for(int i = 0; i < dong; i++)
    {
        HoanVi2So(a[i][x],a[i][y]);
    }
}
void XoaCot(int a[][100], int dong, int &cot, int vitrixoa)
{
    for(int i = vitrixoa; i < cot - 1; i++)
    {
        for(int j = 0; j < dong; j++)
        {
            a[j][i] = a[j][i + 1];
        }
    }
    cot--;
}
int main()
{
	int a[100][100], dong, cot, k;
	cout << "Nhap so dong: ";
	cin >> dong;
	cout << "Nhap so cot: ";
	cin >> cot;
	nhap(a, dong, cot);
	xuat(a, dong, cot);
	cout << "Nhap cot can xoa: ";
	cin >> k;
	XoaCot(a, dong, cot, k);
	xuat(a, dong, cot);
	return 0;
}
