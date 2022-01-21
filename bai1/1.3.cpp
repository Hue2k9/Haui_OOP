#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Hang{
	private:
		char maHang[10];
		char tenHang[50];
		int donGia;
		int soLuong;
	public:
		void nhap();
		void xuat();
};
void Hang::nhap(){
	cout<<"Ma hang: "; cin>>maHang;
	cout<<"Ten hang: "; fflush(stdin); cin.getline(tenHang,50);
	cout<<"Don gia: "; cin>>donGia;
	cout<<"So luong: "; cin>>soLuong;
}
void Hang::xuat(){
	cout<<left<<setw(10)<<maHang<<setw(15)<<tenHang<<setw(10)<<donGia<<setw(10)<<soLuong<<endl;
}
int main(){
	int n;
	cout<<"Nhap so luong mat hang: ";
	cin>>n;
	Hang *h=new Hang[n];
	for(int i=0; i<n; i++){
		h[i].nhap();
	}
	cout<<left<<setw(10)<<"Ma hang"<<setw(15)<<"Ten hang"<<setw(10)<<"Don gia"<<setw(10)<<"So luong"<<endl;
	for(int i=0; i<n; i++){
		h[i].xuat();
	}
	return 0;
}
