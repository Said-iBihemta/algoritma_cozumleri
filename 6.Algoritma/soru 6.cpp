#include<iostream>
int main(){
	
int islem;
int bakiye;
printf("lutfen yapmak istediginiz islemi seciniz");
printf("\nislemler\n1:doviz alisi:\n2:doviz satisi:");	
scanf("%d",&islem);

switch (islem) {
	
case 1 :
printf("doviz alis kurlari icin butceninizi giriniz");
scanf("%d",&bakiye);

if(bakiye < 1000) {
	
printf("Euro:3.85\ndolar:3.54\nsterlin:4.50\nisvicre franki:3.55\n");	
}	
else if (bakiye > 1000 && bakiye <= 5000) {

printf("Euro:3.89\ndolar:3.57\nsterlin:4.57\nisvicre franki:3.61\n");	
}	
else if (bakiye > 5000){
	
printf("Euro:3.90\ndolar:3.58\nsterlin:4.60\nisvicre franki:3.67\n");	
}	
	break;	
	
case 2 :
	
printf("doviz satis kurlari icin butceninizi giriniz");
scanf("%d",&bakiye);

if(bakiye < 1000) {
	
printf("Euro:3.98\ndolar:3.68\nsterlin:4.70\nisvicre franki:3.75\n");	
}	
else if (bakiye > 1000 && bakiye <= 5000) {

printf("Euro:3.94\ndolar:3.63\nsterlin:4.66\nisvicre franki:3.70\n");	
}	
else if (bakiye > 5000){
	
printf("Euro:3.92\ndolar:3.62\nsterlin:4.62\nisvicre franki:3.69\n");	
}	
	break;								
	
	

}
	
	
	return 0;
}
