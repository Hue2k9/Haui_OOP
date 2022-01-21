#include<iostream>
using namespace std;
class Array{
	private:
		int *a;
		int n;
	public: 
	    void nhap();
	    void xuat();
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
int main(){
	Array arr;
	arr.nhap();
	arr.xuat();
	return 0;
}
