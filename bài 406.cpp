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
void ChieuGuongMaTranTheoTrucNgang(int a[][100], int dong, int cot)
{
    for(int i = dong - 1; i >= 0; i--)
    {
        for(int j = 0; j < cot; j++)
        {
            cout << a[i][j] << " ";
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
	ChieuGuongMaTranTheoTrucNgang(a, dong, cot);
	return 0;
}
