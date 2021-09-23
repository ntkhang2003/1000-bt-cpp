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
bool KiemTraNguyenTo(int x)
{
	if (x < 2)
		return false;
	else if (x > 2)
		for (int i = 2; i <= sqrt(x); i++){
			if (x % i == 0)
				return false;
		}
		return true;
}
void XuatCacGiaTriChanTheoThuTuGiamDan(int a[][100], int dong, int cot)
{
    int temp[100];
    int idx = 0;
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            if(a[i][j] % 2 == 0)
            {
                temp[idx++] = a[i][j];
            }
        }
    }
    for(int i = 0; i < idx - 1; i++)
    {
        for(int j =  i + 1; j < idx; j++)
        {
            if(temp[i] < temp[j]) 
            {
                HoanVi(temp[i], temp[j]);
            }
        }
    }
    cout << "Xuat cac gia tri chan theo thu tu giam dan: ";
    for(int i = 0; i < idx; i++)
    {
        cout << temp[i];
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
	XuatCacGiaTriChanTheoThuTuGiamDan(a, dong, cot);
	return 0;
}
