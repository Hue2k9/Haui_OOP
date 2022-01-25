#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class Sach{
	private:
		char maSach[10];
		char tenSach[50];
		char nxb[50];
		int soTrang;
		int giaTien;
	public:
		void nhap();
		void xuat();
};
void Sach::nhap(){
	cout<<"Ma sach:  "; cin>>maSach;
	cout<<"Ten sach: "; fflush(stdin); cin.getline(tenSach,50);
	cout<<"NXB:      "; fflush(stdin); cin.getline(nxb,50);
	cout<<"So trang: "; cin>>soTrang;
	cout<<"Gia tien: "; cin>>giaTien;
}
void Sach::xuat(){
	cout<<left<<setw(10)<<maSach<<setw(50)<<tenSach<<setw(50)<<nxb<<setw(10)<<soTrang<<setw(10)<<giaTien<<endl;

}
int main(){
	int n;
	cout<<"Nhap so cuon sach: ";
	cin>>n;
	Sach *s=new Sach[n];

	for(int i=0; i<n; i++){
		s[i].nhap();
	}

	cout<<left<<setw(10)<<"Ma sach"<<setw(50)<<"Ten sach"<<setw(50)<<"NXB"<<setw(10)<<"So trang"<<setw(10)<<"Gia tien"<<endl;
	for(int i=0; i<n; i++){
		s[i].xuat();
	}

	return 0;
}
