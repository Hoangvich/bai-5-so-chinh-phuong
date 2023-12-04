#include<iostream>
#include<cmath>

using namespace std;

bool la_so_chinh_phuong(int n)
{
	int sqrtN = sqrt(n);
	return (sqrtN * sqrtN == n);
}
int main()
{
	int n;
	cout << "Nhap vao mot so nguyen duong: ";
	cin >> n;
	if(n <= 0)
	{
		cout << "Khong phai la so chinh phuong. Vui long nhap so nguyen khac" << endl;
	}
	else
	{
		if(la_so_chinh_phuong(n))
		{
			cout << n << " " << "La so chinh phuong" << endl;
		}
		else{
			cout << n << " " << "Khong phai la so chinh phuong" << endl;
		}
	}
	
	return 0;
}