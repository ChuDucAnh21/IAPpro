
#include<iostream>
#include<string>
using namespace std;
struct Sach{
	string MaS;
	string TenS;
	string Tacgia;
	string Theloai;
	float Giaban;
};
Sach *nhapS(Sach *a,int &n){
	cout<<"Nhap so sach n = ";
	cin>>n;
	a=new Sach[100];
	cin.ignore();
	for(int i=0;i<n;i++){
		cout<<"------------Nhap sach thu "<<i+1<<"------------"<<endl;
		cout<<"Ma Sach : "; getline(cin,(*(a+i)).MaS);
		cout<<"Ten Sach: "; getline(cin,(*(a+i)).TenS);
		cout<<"Ten Tac Gia : "; getline(cin,(*(a+i)).Tacgia);
		cout<<"The Loai: "; getline(cin,(*(a+i)).Theloai);
		cout<<"Gia Ban : "; cin>>(*(a+i)).Giaban;
		cin.ignore();
	}
	return a;
}
void xuatS(Sach *a,int n){
	for(int i=0;i<n;i++){
		cout<<(*(a+i)).MaS<<"\t"<<(*(a+i)).TenS<<"\t\t"<<(*(a+i)).Tacgia<<"\t\t"<<(*(a+i)).Theloai<<"\t\t"<<(*(a+i)).Giaban<<endl;
	}
}
Sach *xoaS(Sach *a,int &n,int k){
    for(int i=k-1;i<n-1;i++) {
    	(*(a+i))=(*(a+i+1));
	}
    	n--;
    	return a;
}

int main(){
	int n,k;
	Sach *a;		
	a=nhapS(a,n);
	xuatS(a,n);
	cout<<"Nhap vi tri can xoa : "; cin>>k;
	a=xoaS(a,n,k);
	xuatS(a,n);	
}

