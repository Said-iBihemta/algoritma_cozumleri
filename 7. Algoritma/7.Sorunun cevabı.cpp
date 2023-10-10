#include <iostream>
#include <locale.h>
using namespace std;
int N;
int i;
int deger;
int enbdeger;
int main()

{
	cout<<"N tam sayisini giriniz."<<endl;
	cin>>N;
	int k=N-1;
	int a[k];
	for (i=0;i<=k;i++)
	{
		cout<<i+1<<". Sayiyi giriniz."<<endl;
		cin>>a[i];
		if(a[i]>enbdeger)
		{
			enbdeger=a[i];
		}
	}
	cout<<"En buyuk deger : "<<enbdeger<<endl;
	
}

