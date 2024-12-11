#include <stdio.h>

void nhapmatran(int hang, int cot, int matran[hang][cot]) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("Nhap gia tri cho phan tu [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matran[i][j]);
        }
    }
}

void inmatran(int hang, int cot, int maTran[hang][cot]) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", matran[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int hang, cot;
    
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", hang);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", cot);

    int matran[hang][cot];
    
    nhapmatran(hang, cot, matran);
    inmatran(hang, cot, matran);
    
    return 0;
}

