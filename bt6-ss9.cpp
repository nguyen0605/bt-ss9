#include <stdio.h>
#define MAX 100
int daNhapGiaTri = 0; 
void nhapMaTran(int a[MAX][MAX], int *dong, int *cot) {
    printf("Nhap so dong: ");
    scanf("%d", dong);
    printf("Nhap so cot: ");
    scanf("%d", cot);
    printf("Nhap gia tri cac phan tu cua mang:\n");
    for (int i = 0; i < *dong; i++) {
        for (int j = 0; j < *cot; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    daNhapGiaTri = 1;
}
void inMaTran(int a[MAX][MAX], int dong, int cot) {
    if (!daNhapGiaTri) {
        printf("Mang trong. Vui long nhap gia tri truoc.\n");
        return;
    }
    printf("Ma tran:\n");
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void inPhanTuLeVaTinhTong(int a[MAX][MAX], int dong, int cot) {
    if (!daNhapGiaTri) {
        printf("Mang trong. Vui long nhap gia tri truoc.\n");
        return;
    }
    int tong = 0;
    printf("Cac phan tu la so le: ");
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            if (a[i][j] % 2 != 0) {
                printf("%d ", a[i][j]);
                tong += a[i][j];
            }
        }
    }
    printf("\nTong cac phan tu le: %d\n", tong);
}
void inDuongBienVaTinhTich(int a[MAX][MAX], int dong, int cot) {
    if (!daNhapGiaTri) {
        printf("Mang trong. Vui long nhap gia tri truoc.\n");
        return;
    }
    int tich = 1;
    printf("Cac phan tu tren duong bien: ");
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            if (i == 0 || i == dong - 1 || j == 0 || j == cot - 1) {
                printf("%d ", a[i][j]);
                tich *= a[i][j];
            }
        }
    }
    printf("\nTich cac phan tu tren duong bien: %d\n", tich);
}
void inDuongCheoChinh(int a[MAX][MAX], int dong, int cot) {
    if (!daNhapGiaTri) {
        printf("Mang trong. Vui long nhap gia tri truoc.\n");
        return;
    }
    printf("Cac phan tu tren duong cheo chinh: ");
    for (int i = 0; i < dong && i < cot; i++) {
        printf("%d ", a[i][i]);
    }
    printf("\n");
}
void inDuongCheoPhu(int a[MAX][MAX], int dong, int cot) {
    if (!daNhapGiaTri) {
        printf("Mang trong. Vui long nhap gia tri truoc.\n");
        return;
    }
    printf("Cac phan tu tren duong cheo phu: ");
    for (int i = 0; i < dong && i < cot; i++) {
        printf("%d ", a[i][cot - i - 1]);
    }
    printf("\n");
}
void inDongCoTongLonNhat(int a[MAX][MAX], int dong, int cot) {
    if (!daNhapGiaTri) {
        printf("Mang trong. Vui long nhap gia tri truoc.\n");
        return;
    }
    int maxSum = -1, maxRow = -1;
    for (int i = 0; i < dong; i++) {
        int sum = 0;
        for (int j = 0; j < cot; j++) {
            sum += a[i][j];
        }
        if (sum > maxSum) {
            maxSum = sum;
            maxRow = i;
        }
    }
    printf("Dong co tong lon nhat (%d): ", maxSum);
    for (int j = 0; j < cot; j++) {
        printf("%d ", a[maxRow][j]);
    }
    printf("\n");
}
int main() {
    int a[MAX][MAX];
    int dong, cot, choice;
    do {
        printf("\n=====================MENU=====================\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va tinh tong\n");
        printf("4. In cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In cac phan tu nam tren duong cheo chinh\n");
        printf("6. In cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                nhapMaTran(a, &dong, &cot);
                break;
            case 2:
                inMaTran(a, dong, cot);
                break;
            case 3:
                inPhanTuLeVaTinhTong(a, dong, cot);
                break;
            case 4:
                inDuongBienVaTinhTich(a, dong, cot);
                break;
            case 5:
                inDuongCheoChinh(a, dong, cot);
                break;
            case 6:
                inDuongCheoPhu(a, dong, cot);
                break;
            case 7:
                inDongCoTongLonNhat(a, dong, cot);
                break;
            case 8:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    } while (choice != 8);
    return 0;
}
