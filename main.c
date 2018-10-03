#include <stdio.h>
#include <stdio.h>

int arrnumber[] = {8, 2, 3, 1, 5, 7, 9, 0};

void hienthimang() {
    printf("hien thi cac phan tu cua mang\n");
    for (int i = 0; i < 8; ++i) {
        printf("%d", arrnumber[i]);

    }
    printf("\n");
}

int main() {
    hienthimang();
    int tmp;
    for (int i = 0; i < 8; ++i) {
        printf("\ntai i = %d gia tri cua arrnumber tai index arrnumber[%d] = %d\n", i, i, i, arrnumber[i]);
        for (int j = 1 + i; j < 8; ++j) {
            printf("so sanh %d voi %d\n", arrnumber[i], arrnumber[j]);
            if (arrnumber[i] > arrnumber[j]) {
                printf("vi %d > %d nen thuc hien trao doi gia tri.\n", arrnumber[i], arrnumber[j]);
                tmp = arrnumber[i];
                arrnumber[i] = arrnumber[j];
                arrnumber[j] = tmp;
            } else {
                printf("khong thuc thien trao doi vi tri. \n");

            }
            hienthimang();
        }
    }
    return 0;
}