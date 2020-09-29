#include <iostream>
#include <cmath>
using namespace std;
 class HePhuongTrinh{
 	
 	private:
 		int a,b,c,d,e,f;
 		float D,Dx,Dy,x,y;
 	public:
 		void Nhap(){
 			cout<<"Giai he phuong trinh:\n";
 			cout<<"ax+by=c \n";
 			cout<<"dx+ey=f \n";
 			
 			cout<<"Nhap a:";
 			cin>>a;
 			cout<<"Nhap b:";
 			cin>>b;
 			cout<<"Nhap c:";
 			cin>>c;
 			cout<<"Nhap d:";
 			cin>>d;
 			cout<<"Nhap e:";
 			cin>>e;
 			cout<<"Nhap f:";
 			cin>>f;
		 }
		 void Xuat(){
		 	cout<<"He phuong trinh vua nhap la:\n";
 			cout<<a<<"x+"<<b<<"y="<<c<<endl;
 			cout<<d<<"x+"<<e<<"y="<<f;
		 }
		 void TinhNghiem(){
		 	D=a*e-d*b;
		 	Dx=c*e-f*b;
		 	Dy=a*f-d*c;
		 	if(D==0){
		 		if(Dx+Dy==0){
		 			cout<<"Phuong trinh co  vo so nghiem";
				 }else{
				 	cout<<"Phuong trinh vo nghiem";
				 }
			 }else{
			 	x=Dx/D;
			 	y=Dy/D;
			 	cout<<"\nHe phuong trinh co nghiem la:\n";
			 	cout<<"x="<<x<<endl;
			 	cout<<"y="<<y;
			 }
		 }
 };
 int main(){
 	HePhuongTrinh hept;
 	hept.Nhap();
 	hept.Xuat();
 	hept.TinhNghiem();
 }
