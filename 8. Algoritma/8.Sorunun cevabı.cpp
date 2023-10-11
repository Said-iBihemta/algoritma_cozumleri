#include <iostream>
#include <locale.h>
using namespace std;
int N;
int i;
int j;
int l;
int deger;
int main()
{
	cout<<"N tam sayisini giriniz."<<endl;
	cin>>N;
	int k=N-1;
	int a[k];
	for(i=0;i<=k;i++)
	{
		cout<< i+1<<". sayiyi giriniz."<<endl;
		cin>>a[i];
	}
	cout<<"-------------------------------------"<<endl;
	for(i=0;i<=k;i++)
	{
		for(j=0;j<=k;j++)
		{
			if(a[i]<a[j])
			{
				l=a[i];
				a[i]=a[j];
				a[j]=l;
			}
		}
	}
	for(i=0;i<=k;i++)
	{
		cout<<i+1<<". eleman :" << a[i] << endl;
	}
}

