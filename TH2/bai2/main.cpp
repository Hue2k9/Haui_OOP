#include <iostream>

using namespace std;
class NSX{
   char maNSX[10];
   char tenNSX[50];
   char Dcnsx[50];
   public:
       void nhap();
       void xuat();
};
void NSX::nhap(){
   cout<<"Ma nsx  : "; fflush(stdin); gets(maNSX);
   cout<<"Ten nsx : "; fflush(stdin); cin.getline(tenNSX,50);
   cout<<"Dcnsx   : "; fflush(stdin); cin.getline(Dcnsx,50);
}
void NSX::xuat(){
   cout<<"Ma nsx  : "<<maNSX<<endl;
   cout<<"Ten nsx : "<<tenNSX<<endl;
   cout<<"Dcnsx   : "<<Dcnsx<<endl;
}
class Hang{
   char maHang[10];
   char tenHang[50];
   NSX x;
   public:
       void nhap();
       void xuat();
};
void Hang::nhap(){
   cout<<"Ma hang  : "; fflush(stdin); gets(maHang);
   cout<<"Ten hang : "; fflush(stdin); cin.getline(tenHang,50);
   x.nhap();
}
void Hang::xuat(){
   cout<<"Ma hang  : "<<maHang<<endl;
   cout<<"Ten hang : "<<tenHang<<endl;
   x.xuat();
}
int main()
{
    Hang a;
    a.nhap();
    a.xuat();
    return 0;
}
