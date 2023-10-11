#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
int main(){
    int m1,n1,m2,n2,islem,a,b,i,j,k;
    float det;
    cout<<"A MATRISININ SATIR SAYISINI GIRINIZ :";
    cin>>m1;
    cout<<"A MATRISININ SUTUN SAYISINI GIRINIZ :";
    cin>>n1;
   int matrisA[m1][n1];
    
	for(int i=0;i<m1;i++){
            for(int j=0;j<n1;j++){
                    cout << "A Matrisi [" << i+1 << "][" << j+1 << "] : ";
                    cin >> matrisA[i][j];
                    }
            }
             cout << endl;
             
               cout << "A MATRISI\n\n";
    for(int i=0;i<m1;i++){
            for(int j=0;j<n1;j++){
                    cout <<matrisA[i][j]<<"\t";
                    }
                 cout << endl;
                         }
             
             
                    cout << "\nA MATRISININ TRANSPOZU\n\n";
                    
    for(int i=0;i<n1;i++){
            for(int j=0;j<m1;j++){
                    cout <<matrisA[j][i]<<"\t";
                    }
                 cout << endl<<endl;
                         }
                         
                         
                         
                         cout << "\n A MATRISININ DETERMINANTI\n";
                         float ratio;
                         if(m1 != n1)
                         {
                         	cout << "Determinant Hesaplanamadi! Boyutlar esit olmali"<< endl;
						 }
						 else {
				     for(i = 0; i < m1; i++){
				          for(j = 0; j < m1; j++){
				              if(j>i)
							  {                
				
				              ratio = matrisA[j][i]/matrisA[i][i];
				              for(k = 0; k < m1; k++){
				                 matrisA[j][k] -= ratio * matrisA[i][k];
				                        }
				                 }
				                     }
				                       }
				                   det = 1;
				                  for(i = 0; i < m1; i++){
				                  	det *= matrisA[i][i];
								  }
				                      
				                      cout << "Girilen Matrisin Determinant Sonucu :" << det << endl;
                     			 
                      				
						 }
						 cout << endl;
						 
             cout<<"B MATRISININ SATIR SAYISINI GIRINIZ :";
        cin>>m2;
       cout<<"B MATRISININ SUTUN SAYISINI GIRINIZ :";
        cin>>n2;
       int matrisB[m2][n2];
        
        for(int i=0;i<m2;i++){
            for(int j=0;j<n2;j++){
                    cout << "B Matrisi [" << i+1 << "][" << j+1 << "] : ";
                    cin >> matrisB[i][j];
                    }
            }
             cout << endl<<endl;
             
                cout << "B MATRISI\n\n";
    for(int i=0;i<m2;i++){
            for(int j=0;j<n2;j++){
                    cout <<matrisB[i][j]<<"\t";
                    }
                 cout << endl<<endl;
                         }
	
                         
         cout<<"YAPMAK ISTEDIGINIZ ISLEMI SECINIZ\n 1-TOPLAMA\n 2-CIKARMA\n 3-CARPMA\n";             
        cin>>islem;
      
          if(islem==1&&m1!=m2||n1!=n2) {
		       cout<<"\nISLEM YAPILAMAZ BOYULAR ESIT OLMALIDIR !!";
       
		             }
        if(islem==1&&m1==m2&&n1==n2) { 
		 int sonuc[m1][n1];
		 for(int i=0;i<m1;i++){
           for(int j=0;j<n1;j++){
                    sonuc[i][j]=matrisA[i][j]+matrisB[i][j];                 
                    }
            }
            cout << "\nMATRISLERIN TOPLAMI :\n\n";
    for(int i=0;i<m1;i++){
            for(int j=0;j<n1;j++){
                    cout <<sonuc[i][j]<<"\t";
                    }
                    cout << endl<<endl;
        	}
			}
			
			
		if(islem==2&&m1!=m2||n1!=n2) cout<<"\nISLEM YAPILAMAZ. BOYULAR ESIT OLMALIDIR !!";
   
		
		
         if(islem==2&&m1==m2&&n1==n2) { 
		 int sonuc[m1][n1];
		 for(int i=0;i<m1;i++){
           for(int j=0;j<n1;j++){
                    sonuc[i][j]=matrisA[i][j]-matrisB[i][j];                 
                    }
            }
            cout << "\nMATRISLERIN FARKI :\n\n";
    for(int i=0;i<m1;i++){
            for(int j=0;j<n1;j++){
                    cout <<sonuc[i][j]<<"\t";
                    }
                    cout << endl<<endl;
        	           }
	                          }
	                          
	                          
	                          
	     if(islem==3&&n1!=m2) cout<<"\nISLEM YAPILAMAZ. BOYULAR ESIT OLMALIDIR !!";                     
	     
		 if(islem==3&&n1==m2) {
		  int cozum[n1][m2] ;                
	    for(int i=0;i<n1;i++){
		   for(int j=0;j<m2;j++){
		   
             cozum[i][j]=0;

        cozum[i][j]+= (matrisA[i][j] * matrisB[j][i]);}}
         cout << "\nMATRISLERIN CARPIMI :\n\n";
    for(int i=0;i<n1;i++){
            for(int j=0;j<m2;j++){
                    cout <<cozum[i][j]<<"\t";
                    }
                    cout << endl<<endl;
        	           }
	                          }
		
        system("pause");
            return 0;             
    }
    

