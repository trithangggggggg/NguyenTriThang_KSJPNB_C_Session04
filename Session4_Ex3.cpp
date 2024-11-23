#include <stdio.h>

int main(){
	int so;
	printf("Moi ban nhap 1 so: ");
	scanf("%d",&so);
	if ( so % 3 == 0 && so % 5 == 0){
		printf ("Day la so chia het cho ca 3 va 5 "); 
	} else if (so % 3 == 0 ){
		printf ("Day la so chia het cho 3"); 
	} else if ( so % 5 == 0){
		printf ("Day la so chia het cho 5"); 
	} else {
		printf ("So nay khong chia het cho 3 hoac 5 ");
	} 
	return 0; 
} 
