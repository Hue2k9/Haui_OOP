#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	char maSV[10];
	char tenSV[50];
	int tuoi;
	public:
		void nhap();
		void xuat();
};
void SinhVien::nhap(){
	cout<<"Ma sinh vien : "; fflush(stdin); gets(maSV);
	cout<<"Ten sinh vien: "; fflush(stdin); cin.getline(tenSV,50);
	cout<<"Tuoi         : "; cin>>tuoi;
}
void SinhVien::xuat(){
	cout<<setw(10)<<maSV<<setw(15)<<tenSV<<setw(10)<<tuoi<<endl;
}
class LopHoc{
	char maLH[10];
	char phong[50];
	SinhVien *x;
	int n;
	public:
		void nhap();
		void xuat();
};
void LopHoc::nhap(){
	cout<<"Ma lop hoc: "; fflush(stdin); gets(maLH);
	cout<<"Phong     : "; fflush(stdin); cin.getline(phong,50);
    cout<<"Nhap so luong sinh vien: "; cin>>n;
	x=new SinhVien[n];
	for(int i=0; i<n; i++)
	  x[i].nhap();
}
void LopHoc::xuat(){
	cout<<"Ma lop hoc: "<<maLH<<endl;
	cout<<"Phong: "<<phong<<endl;
	cout<<setw(10)<<"Ma sv"<<setw(15)<<"Ten sv"<<setw(10)<<"tuoi"<<endl;
	for(int i=0; i<n; i++)
	  x[i].xuat();
}
int main(){
	LopHoc x;
	x.nhap();
	x.xuat();
	return 0;
}
