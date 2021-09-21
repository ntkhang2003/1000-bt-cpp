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
void DichLenXoayVong(int a[][100], int dong, int cot, int k)
{
	for (int m = 0; m < k; m++)
	{
		int temp[100];
    		for(int i = 0; i < cot; i++)
    		{
     			temp[i] = a[0][i];
    		}
    		for(int i = 0; i < dong - 1; i++)
    		{
        		for(int j = 0; j < cot; j++)
			{
            			a[i][j] = a[i + 1][j];
        		}
    		}
    		for(int i = 0; i < cot; i++)
    		{
        		a[dong - 1][i] = temp[i];
    		}
	}	
}
int main()
{
	int a[100][100], dong, cot, k;
	cout << "Nhap so dong: ";
	cin >> dong;
	cout << "Nhap so cot: ";
	cin >> cot;
	nhap(a, dong, cot);
	xuat(a, dong, cot);
	cout << "Nhap so lan: ";
	cin >> k;
	DichLenXoayVong(a, dong, cot, k);
	xuat(a, dong, cot);
	return 0;
}
