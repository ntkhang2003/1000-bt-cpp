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
void SapXepCotCoChiSoChanGiamDanLeTangDan(int a[][100], int dong, int cot)
{
    for(int i = 0; i < cot; i++)
    {
        for(int j = 0; j < dong - 1; j++)
        {
            for(int k = j + 1; k < dong; k++)
            {
                if(i % 2 == 0)
                {
                    if (a[j][i] < a[k][i])      
                    {
                        HoanVi(a[j][i], a[k][i]);
                    }
                }
                else
                {
                    if (a[j][i] > a[k][i])      
                    {
                        HoanVi(a[j][i], a[k][i]);
                    }
                }
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
 	SapXepCotCoChiSoChanGiamDanLeTangDan(a, dong, cot);	
	cout << "Ma tran sau bien doi: " << endl;
	xuat(a, dong, cot);
	return 0;
}
