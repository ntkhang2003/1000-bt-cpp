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

void SapXepPhanTuTren1DongTangDanTuTraiSangPhai(int a[][100], int dong, int cot, int y)
{
    for (int i = 0; i < dong - 1; i++)
    {
        for (int j = i + 1; j < dong; j++)
        {
            if (a[i][y] > a[j][y]) //(a[i][y] < a[j][y])
            {
                HoanVi(a[i][y], a[j][y]);
            }
        }
    }
}
int main()
{
	int a[100][100], dong, cot, y;
	cout << "Nhap so dong: ";
	cin >> dong;
	cout << "Nhap so cot: ";
	cin >> cot;
	nhap(a, dong, cot);
	xuat(a, dong, cot);
	cout << "Nhap so cot can xep: ";
	cin >> y;
	SapXepPhanTuTren1DongTangDanTuTraiSangPhai(a, dong, cot, y);
	xuat(a, dong, cot);
	return 0;
}
