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
void XoayChieu(int a[], int cot)
{
	int b[100], index=0;
  	for (int i=0; i < cot; i++)
  	{
    	b[index++]=a[i];
	}

  	index=0;
  	for (int i=cot - 1; i >= 0; i--)
  	{
    	a[i]=b[index++];
  	}
}
void SapXep(int a[][100], int dong, int cot)
{
  	int n = dong * cot;
  	for (int i = 0; i < n-1; i++)
  	{
    	for(int j = i+1; j < n; j++)
   	 	{
      		if(a[i/cot][i%cot] > a[j/cot][j%cot])
      		{
        		HoanVi(a[i/cot][i%cot], a[j/cot][j%cot]);
      	}
    }
    if ((i % cot) > dong - 1)
    {
      	if( (i / cot) % 2 != 0)
      	{
        	XoayChieu(a[i/cot], cot);
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
	cout << "Ma tran sau bien doi: " << endl;
	SapXep(a, dong, cot);
	xuat(a, dong, cot);
	return 0;
}
