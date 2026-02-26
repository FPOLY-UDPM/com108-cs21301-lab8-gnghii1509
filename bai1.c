/******************************************************************************
 * Họ và tên: [Tôn Thất Gia Nghi]
 * MSSV:      [PS48181]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH LƯU THÔNG TIN SINH VIÊN 
//  Input: Nhập vào từ bàn phím các thông tin sinh viên như: mã số sinh viên, tên sinh 
//  viên, ngành học, điểm trung bình. 
//  Output: Xuất ra thông tin của tất cả sinh viên trên màn hình

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
        printf("Diem trung binh: ");
        scanf("%f", &sv[i].diemTB);
    }
    
    printf("\nThong tin sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("Ma so sinh vien: %s\n", sv[i].maSV);
        printf("Ten sinh vien: %s\n", sv[i].tenSV);
        printf("Nganh hoc: %s\n", sv[i].nganhHoc);
        printf("Diem trung binh: %.2f\n", sv[i].diemTB);
        printf("-------------------------\n");
    }
    
    return 0;
}
