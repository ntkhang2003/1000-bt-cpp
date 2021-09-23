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
void HoanVi(int &a, int &b)
{
    int temp = a;
	a = b;
	b = temp;
}

void SapXepPhanTuTren1DongTangDanTuTraiSangPhai(int a[][100], int dong, int cot, int x)
{
    for(int i = 0; i < cot - 1; i++)
    {
        for(int j = i + 1; j < cot; j++)
        {
            if(a[x][i] > a[x][j])
            {
                HoanVi(a[x][i], a[x][j]);
            }
        }
    }
}
int main()
{
	int a[100][100], dong, cot, x;
	cout << "Nhap so dong: ";
	cin >> dong;
	cout << "Nhap so cot: ";
	cin >> cot;
	nhap(a, dong, cot);
	xuat(a, dong, cot);
	cout << "Nhap so dong can xep: ";
	cin >> x;
	SapXepPhanTuTren1DongTangDanTuTraiSangPhai(a, dong, cot, x);
	xuat(a, dong, cot);
	return 0;
}
