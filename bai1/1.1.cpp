#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		char maSV[10];
		char hoTen[50];
		int tuoi;
		double diem;
	public:
		void nhap();
		void xuat();
};
void SinhVien::nhap(){
	cout<<"Ma sinh vien: "; cin>>maSV;
	cout<<"Ho ten:       "; fflush(stdin); cin.getline(hoTen,50);
	cout<<"Tuoi:         "; cin>>tuoi;
	cout<<"Diem:         "; cin>>diem;
}
void SinhVien::xuat(){
	cout<<left<<setw(10)<<maSV<<setw(20)<<hoTen<<setw(10)<<tuoi<<setw(10)<<diem<<endl;
}
int main(){
	SinhVien a,b;
	a.nhap();
	b.nhap();
	cout<<left<<setw(10)<<"Ma sinh vien"<<setw(20)<<"Ho ten"<<setw(10)<<"Tuoi"<<setw(10)<<"Diem"<<endl;
	a.xuat();
	b.xuat();
	return 0;
}
