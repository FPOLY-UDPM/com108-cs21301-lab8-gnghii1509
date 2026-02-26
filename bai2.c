/******************************************************************************
 * Họ và tên: [Tôn Thất Gia Nghi]
 * MSSV:      [PS48181]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 2: SẮP XẾP SINH VIÊN THEO ĐIỂM TĂNG DẦN 

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <string.h>
struct SinhVien {
    char maSV[20];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
};
void swap(struct SinhVien *a, struct SinhVien *b) {
    struct SinhVien temp = *a;
    *a = *b;
    *b = temp;
}
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
        printf("Diem trung binh: ");
        scanf("%f", &sv[i].diemTB);
    }
    
    // Sắp xếp sinh viên theo điểm tăng dần
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (sv[j].diemTB > sv[j + 1].diemTB) {
                swap(&sv[j], &sv[j + 1]);
            }
        }
    }
    
    printf("\nThong tin sinh vien sau khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("Ma so sinh vien: %s\n", sv[i].maSV);
        printf("Ten sinh vien: %s\n", sv[i].tenSV);
        printf("Nganh hoc: %s\n", sv[i].nganhHoc);
        printf("Diem trung binh: %.2f\n", sv[i].diemTB);
        printf("-------------------------\n");
    }
    
    return 0;
}