#include <stdio.h>
int main() {
    printf("pham_nhat_tan_sesion09_ex2\n");
    int arr[100];
    int currentLength = 0;
    printf("Nhap so phan tu ban dau: ");
    scanf("%d", &currentLength);
    if (currentLength > 100) {
        printf("So phan tu nhap vao vuot qua kich thuoc mang!\n");
        return 1;
    }
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < currentLength; i++) {
        scanf("%d", &arr[i]);
    }
    int deleteIndex;
    printf("Nhap vi tri can xoa: ");
    scanf("%d", &deleteIndex);
    if (deleteIndex < 0 || deleteIndex >= currentLength) {
        printf("Vi tri can xoa khong hop le!\n");
        return 1;
    }
    for (int i = deleteIndex; i < currentLength - 1; i++) {
        arr[i] = arr[i + 1];
    }
    currentLength--;
    printf("Mang sau khi xoa phan tu: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
