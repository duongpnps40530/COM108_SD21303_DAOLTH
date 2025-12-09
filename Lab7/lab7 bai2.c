#include <stdio.h>
#include <string.h>

int main() {
    char userSys[] = "admin";
    char passSys[] = "12345";
    char user[100];
    char pass[100];
    printf("Nhap vao username: ");
    scanf("%s", user);
    printf("Nhap vao password: ");
    scanf("%s", pass);
    if (strcmp(user, userSys) == 0 && strcmp(pass, passSys) == 0) {
        printf("Dang nhap thanh cong!\n");
    } else {
        printf("Dang nhap that bai. Vui long kiem tra lai username va password.\n");
    }
}
