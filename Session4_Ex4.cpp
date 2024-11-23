#include <stdio.h>

int main() {
	
    int month;
    
    printf("Moi ban nhap thang (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Thang %d co 31 ngay.\n", month);
            break;
        case 4: case 6: case 9: case 11:
            printf("Thang %d co 30 ngay.\n", month);
            break;
        case 2:
            printf("Thang %d co 21 ngay.\n");
            break;
        default:
            printf("So thang sai dinh dang.\n");
    }

    return 0;
}