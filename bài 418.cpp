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
void SapXepAmTangDan(int a[][100], int dong, int cot)
{
    int i, j, Start1, Start2, d = 0;
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            if(a[i][j] < 0)
            {
                for(Start1 = i; Start1 < dong; Start1++)
                {
                    if(d == 0)
                    {
                        Start2 = j;
                    }
                    else
                    {
                        Start2 = 0;
                    }
                    for(; Start2 < cot; Start2++)
                    {
                        if(a[i][j] > a[Start1][Start2] && a[Start1][Start2] < 0)
                        {
                            HoanVi(a[i][j], a[Start1][Start2]);
                        }
                    }
                    if(Start2 == cot)
                    {
                        d = 1;
                    }
                }
                d = 0;
            }
        }
    }
}

void SapXepDuongGiamDan(int a[][100], int dong, int cot)
{
    int i, j, Start1, Start2, d = 0;
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            if(a[i][j] > 0)
            {
                for(Start1 = i; Start1 < dong; Start1++)
                {
                    if(d == 0)
                    {
                        Start2 = j;
                    }
                    else
                    {
                        Start2 = 0;
                    }
                    for(; Start2 < cot; Start2++)
                    {
                        if(a[i][j] < a[Start1][Start2] && a[Start1][Start2] > 0)
                        {
                            HoanVi(a[i][j], a[Start1][Start2]);
                        }
                    }
                    if(Start2 == cot)
                    {
                        d = 1;
                    }
                }
                d = 0;
            }
        }
    }
}

void SapXepAmTangDanDuongGiamDan0GiuNguyenViTri(int a[][100], int dong, int cot)
{
    SapXepAmTangDan(a, dong, cot);
    SapXepDuongGiamDan(a, dong, cot);
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
 	SapXepAmTangDanDuongGiamDan0GiuNguyenViTri(a, dong, cot);	
	cout << "Ma tran sau bien doi: " << endl;
	xuat(a, dong, cot);
	return 0;
}
