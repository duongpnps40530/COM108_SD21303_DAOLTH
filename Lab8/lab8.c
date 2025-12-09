#include <stdio.h>
#include <string.h>

struct NhanVien {
    char MANV[20];
    char HoTen[50];
    int SoNgayCong;
    float Luong;
};

float tinhLuong(struct NhanVien nv) {
    int LUONGCB = 1500000;  
    int NGAY_CHUAN = 25;    
    float luong = LUONGCB;

    if (nv.SoNgayCong < NGAY_CHUAN) {
        
        luong = LUONGCB * 0.9;
    } else if (nv.SoNgayCong > NGAY_CHUAN) {
       
        int ngayDu = nv.SoNgayCong - NGAY_CHUAN;
        float luong1Ngay = (float)LUONGCB / NGAY_CHUAN;
        luong = LUONGCB + ngayDu * luong1Ngay * 2;
    }

    return luong;
}


int main() {
    struct NhanVien ds[5];

    printf("=== NHAP THONG TIN 5 NHAN VIEN ===\n");

    for (int i = 0; i < 5; i++) {
        printf("\nNhan Vien %d:\n", i + 1);

        printf("Ma NV: ");
        scanf("%s", ds[i].MANV);
        getchar();

        printf("Ho Ten: ");
        fgets(ds[i].HoTen, sizeof(ds[i].HoTen), stdin);

        printf("So Ngay Cong: ");
        scanf("%d", &ds[i].SoNgayCong);

       
        ds[i].Luong = tinhLuong(ds[i]);
    }

    
    printf("\n=== THONG TIN NHAN VIEN ===\n");

    for (int i = 0; i < 5; i++) {
        printf("\nNhan Vien %d:\n", i + 1);
        printf("Ma NV: %s\n", ds[i].MANV);
        printf("Ho Ten: %s", ds[i].HoTen);
        printf("So Ngay Cong: %d\n", ds[i].SoNgayCong);
        printf("Luong: %.2f\n", ds[i].Luong);
    }
    printf("\n=== DANH SACH NHAN VIEN SAU KHI SAP XEP ===\n");
    printf("%-10s %-30s %-15s %-10s\n", "MANV", "HoTen", "SoNgayCong", "Luong");
    for (int i = 0; i < 5; i++) {
        printf("%-10s %-30s %-15d %-10.2f\n", ds[i].MANV, ds[i].HoTen, ds[i].SoNgayCong, ds[i].Luong);
    }
    return 0;
}
