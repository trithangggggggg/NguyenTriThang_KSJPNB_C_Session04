#include <stdio.h>

#include <stdio.h>

int main() {
    int num1;
	int num2;
	int num3;
    printf("Moi nhap so thu nhat : ");
    scanf("%d", &num1);
    printf("Moi nhap so thu hai: ");
    scanf("%d", &num2);
    printf("Moi nhap so thu ba: ");
    scanf("%d", &num3);
    if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)) {
        printf("So %d nam trong khoang giua %d và %d.\n", num3, num1, num2);
    } else {
        printf("So %d khong nam trong khoang giua %d và %d.\n", num3, num1, num2);
    }
    return 0;
}

