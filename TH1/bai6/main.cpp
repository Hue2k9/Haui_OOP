#include<iostream>
using namespace std;
class Array{
		float *a;
		int n;
	public:
	    void nhap();
	    void xuat();
	    float max();
	    float min();
};
void Array::nhap(){
	cout<<"Nhap n: ";
	cin>>n;
	a = new float[n];
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
	    cin>>a[i];
	}
}
void Array::xuat(){
	for(int i=0; i<n; i++)
	   cout<<a[i]<<" ";
}
float Array::max(){
	float max=a[0];
	for(int i=1; i<n; i++){
		if (a[i]>max)
		   max=a[i];
	}
	return max;
}
float Array::min(){
	float min=a[0];
	for(int i=1; i<n; i++){
		if (a[i]<min)
		   min=a[i];
	}
	return min;
}
int main(){
	Array arr;
	arr.nhap();
	arr.xuat();
	cout<<"max: "<<arr.max()<<endl;
	cout<<"min: "<<arr.min()<<endl;
	return 0;
}
