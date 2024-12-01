#include <stdio.h>

int main() {
    int arr[100], n, index, newValue, i;

    printf("Nhap so phan tu cua mang (toi da 100): ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap vi tri can sua (0 - %d): ", n - 1);
    scanf("%d", &index);

    if (index < 0 || index >= n) {
        printf("Vi tri khong hop le.\n");
        return 1;
    }

    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);

    arr[index] = newValue;

    printf("Mang sau khi sua:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

