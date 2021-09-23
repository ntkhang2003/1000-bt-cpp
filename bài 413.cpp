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
void SapXepDongCoChiSoChanTangDanLeGiamDan(int a[][100], int dong, int cot)
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot - 1; j++)
        {
            for(int k = j + 1; k < cot; k++)
            {
                if(i % 2 == 0)
                {
                    if (a[i][j] > a[i][k])      
                    {
                        HoanVi(a[i][j], a[i][k]);
                    }
                }
                else
                {
                    if (a[i][j] < a[i][k])      
                    {
                        HoanVi(a[i][j], a[i][k]);
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
 	SapXepDongCoChiSoChanTangDanLeGiamDan(a, dong, cot);	
	cout << "Ma tran sau bien doi: " << endl;
	xuat(a, dong, cot);
	return 0;
}
