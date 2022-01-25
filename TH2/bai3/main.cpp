#include <iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class Hang{
   char maHang[10];
   char tenHang[50];
   float donGia;
   public:
       void nhap();
       void xuat();
};

void Hang::nhap(){
   cout<<"Ma hang : "; fflush(stdin); gets(maHang);
   cout<<"Ten hang: "; fflush(stdin); cin.getline(tenHang,50);
   cout<<"Don gia : "; cin>>donGia;
}

void Hang::xuat(){
   cout<<setw(15)<<maHang<<setw(20)<<tenHang<<setw(15)<<donGia<<endl;
}

class Phieu{
   char maPhieu[10];
   Hang *x;
   int n;
   public:
       void nhap();
       void xuat();
};

void Phieu::nhap(){
   cout<<"Ma phieu: "; fflush(stdin); gets(maPhieu);
   cout<<"Nhap n  : "; cin>>n;
   x=new Hang[n];
   for(int i=0; i<n; i++){
      x[i].nhap();
   }
}

void Phieu::xuat(){
   cout<<"Ma phieu: "<<maPhieu<<endl;
   cout<<setw(15)<<"Ma hang"<<setw(20)<<"Ten hang"<<setw(15)<<"Don gia"<<endl;
   for(int i=0; i<n; i++){
      x[i].xuat();
   }
}

int main()
{
    Phieu a;
    a.nhap();
    a.xuat();
    return 0;
}
