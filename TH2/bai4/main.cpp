#include <iostream>
#include<iomanip>
using namespace std;
class May{
   char maMay[10];
   char kieuMay[50];
   char tinhTrang[50];
   public:
       void nhap();
       void xuat();
};

void May::nhap(){
   cout<<"Ma may    : "; fflush(stdin); gets(maMay);
   cout<<"Kieu may  : "; fflush(stdin); cin.getline(kieuMay,50);
   cout<<"Tinh trang: "; fflush(stdin); cin.getline(tinhTrang,50);
}

void May::xuat(){
   cout<<setw(15)<<maMay<<setw(15)<<kieuMay<<setw(15)<<tinhTrang<<endl;
}

class QuanLy{
   char maQL[10];
   char hoTen[50];
   public:
       void nhap();
       void xuat();
};

void QuanLy::nhap(){
   cout<<"Ma ql : "; fflush(stdin); gets(maQL);
   cout<<"Ho ten: "; fflush(stdin); cin.getline(hoTen,50);
}

void QuanLy::xuat(){
   cout<<"Ma ql : "<<maQL<<endl;
   cout<<"Ho ten: "<<hoTen<<endl;
}

class PhongMay{
   char maPhong[10];
   char tenPhong[50];
   float dienTich;
   QuanLy x;
   May *y;
   int n;
   public:
       void nhap();
       void xuat();
};

void PhongMay::nhap(){
   cout<<"Ma phong : "; fflush(stdin); gets(maPhong);
   cout<<"Ten phong: "; fflush(stdin); cin.getline(tenPhong,50);
   cout<<"Dien tich: "; cin>>dienTich;
   x.nhap();
   cout<<"Nhap so may: "; cin>>n;
   y = new May[n];
   for(int i=0; i<n; i++){
     y[i].nhap();
   }
}

void PhongMay::xuat(){
   cout<<"Ma phong : "<<maPhong<<endl;
   cout<<"Ten phong: "<<tenPhong<<endl;
   cout<<"Dien tich: "<<dienTich<<endl;
   x.xuat();
   cout<<setw(15)<<"Ma may"<<setw(15)<<"Kieu may"<<setw(15)<<"Tinh trang"<<endl;
   for(int i=0; i<n; i++){
    y[i].xuat();
   }
}
int main()
{
    PhongMay a;
    a.nhap();
    a.xuat();
    return 0;
}
