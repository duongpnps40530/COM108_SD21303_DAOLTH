#include <stdio.h>

int main() {
    char s[100];
    printf("Xin moi nhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    int i = 0;
    int n = 0; 
    int p = 0; 
    while (s[i] != '\0') {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            switch ((s[i])) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    n++;
                    break;
                default:
                    p++;
            }
        }
        i++;
    }
    printf("Chuoi '%s' co chua: %d nguyen am va %d phu am.\n", s, n, p);
}
