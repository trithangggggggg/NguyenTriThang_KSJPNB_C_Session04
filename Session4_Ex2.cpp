#include <stdio.h>

int main(){
	int so; 
	printf("Moi nhap mot so bat ki:");
	scanf("%d", &so);
	if ( so % 2 == 0){
		printf("Day la so chan");
	}else{
		printf("Day la so le");
	}
	return 0;
}



