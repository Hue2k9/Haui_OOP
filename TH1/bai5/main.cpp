#include<iostream>
using namespace std;
class Array{
		int *a;
		int n;
	public:
	    void nhap();
	    void xuat();
	    void sapXep();
};
void Array::nhap(){
	cout<<"Nhap n: ";
	cin>>n;
	a = new int[n];
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
	    cin>>a[i];
	}
}
void Array::xuat(){
	for(int i=0; i<n; i++)
	   cout<<a[i]<<" ";
}
void Array::sapXep(){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j])
              swap(a[i],a[j]);
        }
    }
}
int main(){
	Array arr;
	arr.nhap();
	arr.sapXep();
	arr.xuat();
	return 0;
}
