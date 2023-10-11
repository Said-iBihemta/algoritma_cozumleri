#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a, satir, sutun, ydeger, deger;
	int Amatrisi [100][100];
	float yydeger;
	
	cout << "A matrisinin satir ve sutun degerlerini giriniz;\n";
	cout << "satir : ";
	cin >> satir ;
	cout << "sutun : " ;
	cin >> sutun ;

	for (int i=0; i<satir; i++){
		for (int j=0; j<sutun; j++){
			cout << "Amatrisi : " << '[' << i+1 << ']' << '[' << j+1 << ']' << '=';
			cin >> deger;
			cout << endl;
			
		}
	}
	cout << "verilere gore b matrisini yazmak icin a matris degerlerini tekrar giriniz.";
	
	for( int k=0; k<satir; k++){
		for(int l=0; l<sutun; l++){
			
		cout << "\nA matrisi : " << '[' <<k+1 <<']'<<'['<<l+1 << ']' << '=' ;
		cin >> ydeger;
		yydeger= pow(ydeger,1./2.);	
		cout << "B matrisi ilgili eleman : " << yydeger;
		} 
	}
	return(0);
}

