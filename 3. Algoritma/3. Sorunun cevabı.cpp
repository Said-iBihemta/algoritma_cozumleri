#include <iostream>
#include <string.h>
using namespace std;


int main(){
	int a,b,c,d;
	
	cout<<"To continue in English, type in 2 and press to enter."; cout<<"Turkce devam etmek icin,1 yaziniz ve enter'a basiniz'." <<endl;	
    cin>> a;
	 if(a==1){
	 		cout<<"1-12 araliginda sayi giriniz."; cin>>c;
	     switch (c){
	    	case 1:{ cout<< "Ocak";
		break;
	   }
	        case 2:{ cout<< "Þubat";
		break;
	   }   
	        case 3:{ cout<< "Mart";
		break;
	   }
	        case 4:{ cout<< "Nisan";
		break;
	   }
	        case 5:{ cout<< "Mayýs";
	   
		break;
	   }
	        case 6:{ cout<< "Haziran";
		break;
	   }	
	        case 7:{ cout<< "Temmuz";
				break;
	   }	
			case 8:{ cout<< "Aðustos";
				break;
			}	
			case 9:{ cout<< "Eylul";
				break;
			}
			case 10:{ cout<< "Ekim";
				break;
			}
			case 11:{ cout<< "Kasim";
				break;
			}	
			case 12:{ cout<< "Aralik";
				break;
			}
			default:{ cout<< "Yanlis karakter girdiniz.";
				break;
				
			}
			
		} 
	 }
	 
	 
	 		
	else if(a==2){
	 	
	 	cout<<"Enter a number between 1-12.";
		  	 cin>> d;
		 switch (d){
	    	case 1:{ cout<< "January";
		break;
	   }
	        case 2:{ cout<< "February";
		break;
	   }   
	        case 3:{ cout<< "March";
		break;
	   }
	        case 4:{ cout<< "April";
		break;
	   }
	        case 5:{ cout<< "May";
	   
		break;
	   }
	        case 6:{ cout<< "June";
		break;
	   }	
	        case 7:{ cout<< "July";
				break;
	   }	
			case 8:{ cout<< "August";
				break;
			}	
			case 9:{ cout<< "September";
				break;
			}
			case 10:{ cout<< "October";
				break;
			}
			case 11:{ cout<< "November";
				break;
			}	
			case 12:{ cout<< "December";
				break;
			}
			default:{ cout<< "FATTAL ERROR! :D";
				break;
				
			}
		}
		  
	 }
			
	else{
		cout<<"ERROR! Yanlýþ karekter girdiniz!";
		
	}	   
		
	
	 
	cin>>a; 	            		
	
  
  }
  
		
		

	   
	   
	




