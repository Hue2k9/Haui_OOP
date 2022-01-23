#include<bits/stdc++.h>
using namespace std;
class PHIEU;

class NHANVIEN
{
    char HOTEN[30];
    char CHUCVU[30];
public:
    void nhap();
    void xuat();
    friend void SUA(PHIEU &K);
};
void NHANVIEN::nhap()
{
    cout<<"Ho ten nv: "; fflush(stdin); gets(HOTEN);
    cout<<"Chuc vu nv:"; fflush(stdin); gets(CHUCVU);
}
void NHANVIEN::xuat()
{
    cout<<"Nhan vien kiem ke: "<<HOTEN;
    cout<<".   Chuc vu: "<<CHUCVU<<endl;
}

class PHONG
{
    char MAPH[30];
    char TENPH[30];
    char TENTP[30];
public:
    void nhap();
    void xuat();
};

void PHONG::nhap()
{
    cout<<"Ma phong: "; fflush(stdin); gets(MAPH);
    cout<<"Ten phong:"; fflush(stdin); gets(TENPH);
    cout<<"Truong phong: "; fflush(stdin); gets(TENTP);
}
void PHONG::xuat()
{
    cout<<"Kiem ke tai phong: "<<TENPH;
    cout<<".   Ma phong: "<<MAPH<<endl;
    cout<<"Ten truong phong: "<<TENTP<<endl;
}
class TAISAN
{
    char TENTS[30];
    int SL;
    char TT[30];
public:
    void nhap();
    void xuat();
    friend class PHIEU;
    friend void DEM(PHIEU K);
};

void TAISAN::nhap()
{
    cout<<"Ten tai san: "; fflush(stdin); gets(TENTS);
    cout<<"So luong:    "; cin>>SL;
    cout<<"Tinh trang:  "; fflush(stdin); gets(TT);
}

void TAISAN::xuat()
{
    cout<<setw(20)<<TENTS<<setw(10)<<SL<<setw(20)<<TT<<endl;
}

class PHIEU
{
    char MAPHIEU[30];
    char NGAY[30];
    NHANVIEN x;
    PHONG y;
    TAISAN * z;
    int n;
public:
    void nhap();
    void xuat();
    friend void SUA(PHIEU &K);
    friend void DEM(PHIEU K);
};
void PHIEU::nhap()
{
    cout<<"Ma phieu: "; fflush(stdin); gets(MAPHIEU);
    cout<<"Ngay lap: "; fflush(stdin); gets(NGAY);
    x.nhap();
    y.nhap();
    cout<<"n="; cin>>n;
    z = new TAISAN[n];
    for(int i=0; i<n; i++)
        z[i].nhap();
}

void PHIEU::xuat()
{
    cout<<setw(40)<<"PHIEU KIEM KE TAI SAN"<<endl;
    cout<<"Ma phieu: "<<MAPHIEU<<". Ngay kiem ke: "<<NGAY<<endl;
    x.xuat();
    y.xuat();

    cout<<setw(20)<<"Ten tai san"<<setw(10)<<"So luong"
    <<setw(20)<<"Tinh trang"<<endl;

    for(int i=0; i<n; i++)
        z[i].xuat();

    cout<<"So tai san da kiem ke: "<<n;
    int T = 0;
    for(int i=0; i<n; i++)
        T = T + z[i].SL;
    cout<<". Tong so luong: "<<T<<endl;
}

// CÓ LÀM THAY ĐỔI THUỘC TÍNH CỦA ĐỐI TƯỢNG KHÔNG
 //   NO  --> KHÔNG &
 //   YES:
 //       THAY ĐỔI TRÊN CON TRO: KHÔNG THAY ĐỔI BỘ NHỚ -> KHÔNG &
  //      THAY ĐỔI TRÊN CON TRO: CÓ THAY ĐỔI BỘ NHỚ    -> CẦN &:  "*&"
  //      THAY ĐỔI TRÊN BIẾN THƯỜNG: -> CẦN &




void SUA(PHIEU &K)
{
    strcpy(K.x.CHUCVU, "KE TOAN TRUONG");
}

void DEM(PHIEU K)
{
    int d = 0;
    for(int i=0; i<K.n; i++)
        if(K.z[i].SL % 2 == 0)
        d++;
    cout<<"TAI SAN CO SL CHAN: "<<d<<endl;
}

int main()
{
    PHIEU K;
    K.nhap();
    K.xuat();
    SUA(K);
    K.xuat();
    DEM(K);
}










