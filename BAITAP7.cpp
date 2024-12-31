#include <stdio.h>

void Matran(int hangso, int socot, int maTran[hangso][socot]) {
    for (int i = 0; i < hangso; i++) {
        for (int j = 0; j < socot; j++) {
            printf("phan tu [%d][%d]: ", i, j);
            scanf("%d", &maTran[i][j]);
        }
    }
}

void inMatran(int hangso, int socot, int maTran[hangso][socot]) {
    printf("ma tran da nhap:\n");
    for (int i = 0; i < hangso; i++) {
        for (int j = 0; j < socot; j++) {
            printf("%d ", maTran[i][j]); 
        }
        printf("\n");
    }
}

int main() {
    int sohang, socot;

    printf("nhap so hang: ");
    scanf("%d", &sohang);
    printf("nhap so cot: ");
    scanf("%d", &socot);

    int maTran[sohang][socot];

    Matran(sohang, socot, maTran);
    inMatran(sohang, socot, maTran);

    return 0;
}

