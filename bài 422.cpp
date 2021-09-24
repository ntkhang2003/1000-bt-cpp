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
void TinhTongCacDong(int a[][100], int dong, int cot, int b[])
{
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            b[i] += a[i][j];
        }
    }
}
void HoanVi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void HoanVi2Dong(int a[][100], int cot, int dong1, int dong2)
{
    for(int j = 0; j < cot; j++)
    {
        HoanVi(a[dong1][j], a[dong2][j]);
    }
}

void SapXepCacDongDuaVaoTongCacPhanTuTrong1Dong(int a[][100], int dong, int cot)
{
    int b[100] ={0};
    TinhTongCacDong(a, dong, cot, b);
    for (int i = 0; i < dong - 1; i++)  
    {   
        for (int j= i + 1; j < dong; j++)   
        {    
            if (b[i] > b[j])    
            {
                HoanVi2Dong(a, cot, i, j);
                HoanVi(b[i], b[j]);
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
 	SapXepCacDongDuaVaoTongCacPhanTuTrong1Dong(a, dong, cot);	
	cout << "Ma tran sau bien doi: " << endl;
	xuat(a, dong, cot);
	return 0;
}
