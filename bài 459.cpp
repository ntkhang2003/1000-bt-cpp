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
bool KiemTraMaTranCoPhaiLaMaPhuong(int a[][100], int n)
{
    int i, j, temp, s1, s2;
    // Tổng các phần tử trên đường chéo phụ và đường chéo chính
    for(s1 = s2 = i = 0; i < n; i++)
    {
        s1 += a[i][i];
        s2 += a[i][n - i - 1];
    }
    if(s1 != s2) 
    {
        return false;
    }
    temp = s1;
    // tổng các phần tử trên các dòng và các cột
    for(i = 0; i < n; i++)
    {
        for(s1 = s2 = j = 0; j < n; j++)
        {
            s1 += a[i][j];
            s2 += a[j][i];
        }
    }
    if(s1 != temp || s2 != temp)
    {
        return false;
    }
	return true;
}
int main()
{
	int a[100][100], n;
	cout << "Nhap n: ";
	cin >> n;
	nhap(a, n);
	xuat(a, n);
	cout << KiemTraMaTranCoPhaiLaMaPhuong(a ,n);
	return 0;
}
