#include<bits/stdc++.h>
using namespace std;

float Tong_E(int n,float x){
	float sum=0;
	int gt=1;
	for(int i=0;i<=n;i++){
		gt=gt*(i+1);
		sum+=(pow(-1,i+1))*(pow(x,i)/gt);
	}
	return sum;
}

int Demkitu(string str, int n){
	if (n < 0) return 0;	
	else{
		if (isdigit(str[n])) return int(str[n]-'0') + Demkitu(str, n - 1);
		else  return Demkitu(str, n - 1);	
	}
}
int main(){
	int n;
	float x;
	string s;
	cout<<"Nhap n : "; cin>>n;
	cout<<"Nhap x : "; cin>>x;
	cout<<"Tong day E = "<<Tong_E(n, x)<<endl;
	cin.ignore();
	cout<<"Nhap xau : "; getline(cin,s);
	cout<<"Tong cac chu so xuat hien trong xau : "<<Demkitu(s,s.size());
}

