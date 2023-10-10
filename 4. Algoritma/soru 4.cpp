#include<iostream>
using namespace std;

int main(){
	int x,n;
	cout<<"n sayisini giriniz "<<endl;
	cin>>n;
	
	cout <<"x sayisini giriniz"<<endl;
	cin>>x;
	
	for(int i=1;i<=n;i++){
		
		if(i%x==0){
			
			cout<<i<<endl;
			
		}
	}
}
