/******************************************************************************
 * Họ và tên: [Tôn Thất Gia Nghi]
 * MSSV:      [PS48181]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 3: TÌM KIẾM SINH VIÊN

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <string.h>
struct SinhVien {
    char maSV[20];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
};
int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    struct SinhVien sv[n];
    
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        printf("Ma so sinh vien: ");
        scanf("%s", sv[i].maSV);
        printf("Ten sinh vien: ");
        scanf(" %[^\n]", sv[i].tenSV); // Đọc chuỗi có dấu cách
        printf("Nganh hoc: ");
        scanf(" %[^\n]", sv[i].nganhHoc); // Đọc chuỗi có dấu cách
    }
    
    char maSVTimKiem[20];
    printf("Nhap ma so sinh vien can tim kiem: ");
    scanf("%s", maSVTimKiem);
    
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(sv[i].maSV, maSVTimKiem) == 0) {
            printf("\nThong tin sinh vien tim duoc:\n");
            printf("Ma so sinh vien: %s\n", sv[i].maSV);
            printf("Ten sinh vien: %s\n", sv[i].tenSV);
            printf("Nganh hoc: %s\n", sv[i].nganhHoc);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("\nKhong tim thay sinh vien co ma so %s\n", maSVTimKiem);
    }
    
    return 0;
}