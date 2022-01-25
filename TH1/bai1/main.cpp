#include<iostream>
#include<conio.h>
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
	cout<<"Ma sinh vien: "<<maSV<<endl;
	cout<<"Ho ten: "<<hoTen<<endl;
	cout<<"Tuoi: "<<tuoi<<endl;
	cout<<"Diem: "<<diem<<endl;
}
int main(){
	SinhVien a,b;
	a.nhap();
	b.nhap();
	a.xuat();
	b.xuat();
	return 0;
}
