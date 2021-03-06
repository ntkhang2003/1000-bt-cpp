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
void XoayMaTran1Goc90DoTheoChieuKimDongHo(int a[][100], int dong, int cot)
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
}
void XoayMaTran1Goc90DoTheoChieuKimDongHo_2(int a[][100], int dong, int cot)
{
    for (int i = 0; i < cot; i++)  
    {   
        for (int j = dong - 1; j >= 0; j--)   
        {    
            cout << a[j][i] << " "; 
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
	XoayMaTran1Goc90DoTheoChieuKimDongHo(a, dong, cot);
	return 0;
}
