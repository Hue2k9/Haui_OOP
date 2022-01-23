#include<bits/stdc++.h>
using namespace std;
class Hang{
	private:
		char maSp[10];
		char tenSP[50];
		int soLuong;
		float donGia;
	public:
		void nhap();
		void xuat();
		float getThanhTien();
};
void Hang::nhap(){
	cout<<"Ma sp: "; fflush(stdin); gets(maSp);
	cout<<"Ten sp: "; fflush(stdin); cin.getline(tenSP,50);
	cout<<"So luong: "; cin>>soLuong;
	cout<<"Don gia: "; cin>>donGia;
}
void Hang::xuat(){
	cout<<setw(10)<<maSp<<setw(20)<<tenSP<<setw(10)<<soLuong<<setw(15)<<donGia;
	cout<<setw(15)<<getThanhTien()<<endl;
}
float Hang::getThanhTien(){
	return soLuong*donGia;
}
class NCC{
	private:
		char maNCC[10];
		char tenNCC[20];
		char diaChi[50];
		char soDienThoai[10];
	public:
		void nhap();
		void xuat();
};
void NCC::nhap(){
	cout<<"Ma ncc: "; fflush(stdin); gets(maNCC);
	cout<<"Ten ncc: "; fflush(stdin); cin.getline(tenNCC,20);
	cout<<"Dia chi: "; fflush(stdin); cin.getline(diaChi,50);
	cout<<"SDT: "; fflush(stdin); gets(soDienThoai);
}
void NCC::xuat(){
	cout<<setw(20)<<maNCC<<setw(20)<<tenNCC<<endl;
	cout<<setw(25)<<diaChi<<setw(20)<<soDienThoai<<endl;
}

class Phieu{
	private:
		char maPhieu[10];
		char ngayLap[10];
		NCC ncc;
		Hang *hang;
		int n;
		float tong;
	public:
		void nhap();
		void xuat();
};
void Phieu::nhap(){
	cout<<"Ma phieu: "; fflush(stdin); gets(maPhieu);
	cout<<"Ngay lap: "; fflush(stdin); gets(ngayLap);
	ncc.nhap();
	cout<<"Nhap so luong mat hang: ";
	cin>>n;
	hang = new Hang[n];
	for(int i=0; i<n; i++){
		hang[i].nhap();
	}
}
void Phieu::xuat(){
	tong=0;
	cout<<"Dai hoc Victory"<<endl;
	cout<<"\t\t\t\tPHIEU NHAP VAN PHONG PHAM"<<endl;
	cout<<"Ma phieu: "<<maPhieu<<"\t\t\tNgay lap: "<<ngayLap<<endl;
    ncc.xuat();
    cout<<setw(10)<<"Ma SP"<<setw(20)<<"Ten SP"<<setw(10)<<"So luong"<<setw(15)<<"Don gia";
	cout<<setw(15)<<"Thanh tien"<<endl;
	for(int i=0; i<n; i++){
		hang[i].xuat();
		tong+=hang[i].getThanhTien();
	}
	cout<<"\t\t\tTONG: "<<tong<<endl;
	cout<<"\t\tHieu tuong\t\tPhong tai chinh \t\t Nguoi lap"<<endl;
}

int main(){
	Phieu x;
	x.nhap();
	x.xuat();
	return 0;
}
