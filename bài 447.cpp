#include <iostream>
#include <cmath>
using namespace std;
void nhap(int a[][100], int n)
{
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << "Nhap a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}
void xuat(int a[][100], int n)
{
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}	
	
}
bool KiemTraNguyenTo(int x)
{
	if (x < 2)
		return false;
	else if (x > 2)
		for (int i = 2; i <= sqrt(x); i++)
		{
			if (x % i == 0)
				return false;
		}
		return true;
}
int TimSoNguyenToLonNhat(int a[][100], int n)
{
    int Max = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(KiemTraNguyenTo(a[i][j]) && a[i][j] > Max)
            {
				Max = a[i][j];
            }
        }
    }
    return Max;
}
int main()
{
	int a[100][100], n;
	cout << "Nhap n: ";
	cin >> n;
	nhap(a, n);
	xuat(a, n);
	cout << TimSoNguyenToLonNhat(a, n);
	return 0;
}
