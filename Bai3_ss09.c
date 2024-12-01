#include <stdio.h>

int main() {
    int arr[100];
    int n, currentLength, i, deleteIndex;

    printf("Nhap so phan tu cua mang (toi da 100): ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    currentLength = n;

    printf("Nhap vi tri can xoa (0 - %d): ", currentLength - 1);
    scanf("%d", &deleteIndex);

    if (deleteIndex < 0 || deleteIndex >= currentLength) {
        printf("Vi tri khong hop le.\n");
        return 1;
    }

    for (i = deleteIndex; i < currentLength - 1; i++) {
        arr[i] = arr[i + 1];
    }
    currentLength--;

    printf("Mang sau khi xoa:\n");
    for (i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

