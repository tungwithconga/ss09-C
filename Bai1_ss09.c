#include <stdio.h>

int main() {
    int arr[100];
    int n, currentLength, i, value, addIndex;
    
    printf("Nhap so phan tu cua mang (toi da 100): ");
    scanf("%d", &n);
    
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    currentLength = n;

    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);
    printf("Nhap vi tri can them : ");
    scanf("%d", &addIndex);

    if (addIndex < 0 || addIndex >= 100) {
        printf("Vi tri khong hop le.\n");
        return 1;
    }

    if (addIndex >= currentLength) {
        arr[addIndex] = value;
        currentLength = addIndex + 1;
    } else {
        for (i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = value;
        currentLength++;
    }

    printf("Mang sau khi them:\n");
    for (i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

