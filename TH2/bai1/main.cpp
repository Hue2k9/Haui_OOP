#include <iostream>
#include<conio.h>
using namespace std;
class Date{
  int d;
  int m;
  int y;
  public:
      void nhap();
      void xuat();
};
void Date::nhap(){
   cout<<"ngay  : "; cin>>d;
   cout<<"Thang : "; cin>>m;
   cout<<"Nam   : "; cin>>y;
}
void Date::xuat(){
   cout<<"Ngay : "<<d<<endl;
   cout<<"Thang: "<<m<<endl;
   cout<<"Nam  : "<<y<<endl;
}
class NhanSu{
    char maNhanSu[10];
    char hoTen[50];
    Date ns;
public:
    void nhap();
    void xuat();
};
void NhanSu::nhap(){
    cout<<"Ma nhan su: "; fflush(stdin); gets(maNhanSu);
    cout<<"Ho ten    : "; fflush(stdin); cin.getline(hoTen,50);
    ns.nhap();
}
void NhanSu::xuat(){
    cout<<"Ma nhan su: "<<maNhanSu<<endl;
    cout<<"Ho ten    : "<<hoTen<<endl;
    ns.xuat();
}
int main()
{
    NhanSu x;
    x.nhap();
    x.xuat();
    return 0;
}
