#include <stdio.h>

int main() {
    int chon;
    do {
        printf("\n====================MENU====================\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim USCLN va BSCNN cua 2 so\n");
        printf("3. Chuong trinh tinh tien karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Chuc nang doi tien\n");
        printf("6. Tinh lai suat vay tra gop\n");
        printf("7. Chuong trinh vay tien mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Game FPOLY-LOTT\n");
        printf("10. Tinh toan phan so\n");
        printf("0. Thoat\n");
        printf("Hay chon chuc nang: ");
        scanf("%d", &chon);

        switch (chon) {
            case 1:
                printf(">>  Kiem tra so nguyen\n");
                break;
            case 2:
                printf(">>  Tim USCLN va BSCNN cua 2 so\n");
                break;
            case 3:
                printf(">>  Chuong trinh tinh tien karaoke\n");
                break;
            case 4:
                printf(">>  Tinh tien dien\n");
                break;
            case 5:
                printf(">>  Chuc nang doi tien\n");
                break;
            case 6:
                printf(">>  Tinh lai suat vay tra gop\n");
                break;
            case 7:
                printf(">>  Chuong trinh vay tien mua xe\n");
                break;
            case 8:
                printf(">>  Sap xep thong tin sinh vien\n");
                break;
            case 9:
                printf(">>  Game FPOLY-LOTT\n");
                break;
            case 10:
                printf(">>  Tinh toan phan so\n");
                break;
            case 0:
                printf(">> Dang thoat chuong trinh...\n");
                break;
            default:
                printf(">> Lua chon khong hop le! Hay nhap tu 0 - 10.\n");
                break;
        }

    } while (chon != 0);

    return 0;
}