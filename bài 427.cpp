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
int TimPhanTuLonNhatDongICotJ(int a[][100], int dong, int cot, int i, int j)
{
    int Max = a[i][0];
    for(int k = 1; k < dong; k++)
    {
        if (Max < a[i][k])
		{
			Max = a[i][k];
		}
    }
    for(int k = 0; k < cot; k++)
    {
        if (Max < a[k][j])
		{
			Max = a[k][j];
		}
    }
    return Max;
}

void XayDungMaTranB(int a[][100], int dong, int cot, int b[][100])
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            b[i][j] = TimPhanTuLonNhatDongICotJ(a, dong, cot, i, j);
        }
    }
}
int main()
{
	int a[100][100], dong, cot, b[100][100];
	cout << "Nhap so dong: ";
	cin >> dong;
	cout << "Nhap so cot: ";
	cin >> cot;
	nhap(a, dong, cot);
	xuat(a, dong, cot);
	cout << "Ma tran sau bien doi: " << endl;
	XayDungMaTranB(a, dong, cot, b);
	xuat(b, dong, cot);
	return 0;
}
