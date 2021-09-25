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
int DemCapGiaTriDoiXungQuaDuongCheoChinh(int a[][100], int n)
{
    int dem = 0;
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(a[i][j] == a[j][i])
            {
                dem++;
            }
        }
    }
    return dem;
}
int main()
{
	int a[100][100], n;
	cout << "Nhap n: ";
	cin >> n;
	nhap(a, n);
	xuat(a, n);
	cout << DemCapGiaTriDoiXungQuaDuongCheoChinh(a ,n);
	return 0;
}
