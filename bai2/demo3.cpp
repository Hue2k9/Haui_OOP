#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Hang{
	private:
		char tenHang[50];
		double donGia;
		int soLuong;
		double thanhTien;
	public:
		void nhap();
		void xuat();
		double getThanhTien();
};
double Hang::getThanhTien(){
	return soLuong*donGia;
}
void Hang::nhap(){
	cout<<"Ten hang: "; fflush(stdin); cin.getline(tenHang,50);
	cout<<"Don gia : "; cin>>donGia;
	cout<<"So luong: "; cin>>soLuong;
}
void Hang::xuat(){
	cout<<setw(20)<<tenHang<<setw(10)<<donGia<<setw(10)<<soLuong<<setw(10)<<getThanhTien();
}
class Phieu{
	private:
		char maPhieu[10];
		char khachHang[50];
		char ngayLap[10];
		double tongThanhTien;
		Hang *x;
		int n;
	public:
		void nhap();
		void xuat();		
};
void Phieu::nhap(){
	cout<<"Ma phieu  : "; fflush(stdin); gets(maPhieu);
	cout<<"Khach hang: "; fflush(stdin); cin.getline(khachHang,50);
	cout<<"Ngay lap  : "; fflush(stdin); gets(ngayLap);
	cout<<"Nhap so luong mat hang: "; cin>>n;
	tongThanhTien=0;
	x=new Hang[n];
	for(int i=0; i<n; i++){
		x[i].nhap();
		tongThanhTien+=x[i].getThanhTien();
	}
}
void Phieu::xuat(){
	cout<<"Ma phieu  : "<<maPhieu<<endl;
	cout<<"Khach hang: "<<khachHang<<endl;
	cout<<"Ngay lap  :"<<ngayLap<<endl;
	cout<<setw(50)<<"Tong thanh tien: "<<tongThanhTien<<endl;
	cout<<setw(20)<<"Ten hang"<<setw(10)<<"Don gia"<<setw(10)<<"So luong"<<setw(10)<<"Thanh tien"<<endl;
	for(int i=0; i<n; i++){
	   x[i].xuat();
	}
}
int main(){
	Phieu p;
	p.nhap();
	p.xuat();
	return 0;
}
