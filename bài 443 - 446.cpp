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
int TimMax(int a[][100], int n)
{
  	int Max=a[0][1];
 	for(int i=0; i<n; i++)
  	{
      for(int j=0; j<n; j++)
      {
      	if((i<j) && (a[i][j]>Max))
      	//if((i>j) && (a[i][j]>Max))
		 //if((i==j) && (a[i][j]>Max))
       	//if((i+j)==n-1 && (a[i][j]>Max))
   		 {
			      Max=a[i][j];
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
	cout << TimMax(a, n);
	return 0;
}
