

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a,b;
	float y2;
	cout<< "a degerini giriniz:"; cout<< endl;
	cin>> a;
	cout<< "b degerini giriniz:"; cout<< endl;
	cin>> b; 

	y2= (a+a/(b+1))/(1+(a+b^2)^(1/3)/1/(a*b)^(1/2))^(1/5)+(a*b)^2 - 4*(a/b^(2/3));
	cout<< "y2=" <<y2<<endl;
	
		
        system ("pause");
	 return(0);
}


	

