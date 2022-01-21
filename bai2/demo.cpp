#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class GiamDoc{
	char hoTen[50];
	int tuoi;
	char sdt[10];
	public:
		void nhap();
		void xuat();
};
void GiamDoc::nhap(){
	cout<<"Ho ten: "; fflush(stdin); cin.getline(hoTen,50);
	cout<<"Tuoi:   "; cin>>tuoi;
	cout<<"Sdt:    "; cin>>sdt;
}
void GiamDoc::xuat(){
	cout<<setw(15)<<hoTen<<setw(10)<<tuoi<<setw(15)<<sdt;
}
class CongTy{
	char tenCT[50];
	char diaChi[50];
	GiamDoc x;
	public:
		void nhap();
		void xuat();
};
void CongTy::nhap(){
	cout<<"Ten cong ty: "; fflush(stdin); cin.getline(tenCT,50);
	cout<<"Dia chi:     "; fflush(stdin); cin.getline(diaChi,50);
	x.nhap();
}
void CongTy::xuat(){
	cout<<left<<setw(15)<<tenCT<<setw(15)<<diaChi;
	x.xuat();
	cout<<endl;
}

int main(){
	CongTy x;
	x.nhap();
	cout<<left<<setw(15)<<"Ten CT"<<setw(15)<<"Dia chi";
	cout<<setw(15)<<"Ho ten"<<setw(10)<<"Tuoi"<<setw(15)<<"Sdt";
	x.xuat();
	return 0;
}
