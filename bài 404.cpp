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
void XoayMaTran1Goc270DoTheoChieuKimDongHo(int a[][100], int dong, int cot)
{
    int c[100][100];
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            c[i][j] = a[cot - 1 - j][i];
			cout << c[i][j] << " ";
        }
        cout << "\n";
    }
	int d[100][100];
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            d[i][j] = c[cot - 1 - j][i];
			cout << d[i][j];
        }
        cout << "\n";
    }
	int e[100][100];
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            e[i][j] = d[cot - 1 - j][i];
			cout << e[i][j] << " ";
        }
        cout << "\n";
    }
}
void XoayMaTran1Goc270DoTheoChieuKimDongHo_2(int a[][100], int dong, int cot)
{
    for (int i = cot - 1; i >= 0; i--)  
    {   
        for (int j = 0; j < dong; j++)   
        {    
            cout << a[j][i];   
        }   
        cout << "\n";
    } 
}
int main()
{
	int a[100][100], dong, cot;
	cout << "Nhap so dong: ";
	cin >> dong;
	cout << "Nhap so cot: ";
	cin >> cot;
	nhap(a, dong, cot);
	xuat(a, dong, cot);
	cout << "Ma tran sau khi bien doi:" << endl;
	XoayMaTran1Goc270DoTheoChieuKimDongHo(a, dong, cot);
	return 0;
}
