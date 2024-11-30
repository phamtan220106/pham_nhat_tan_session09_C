#include <stdio.h>

int main()
{
    printf("pham_nhat_tan_sesion09_ex1\n");
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
    int value, addIndex;
    printf("Nhap gia tri can them: ");
    scanf("%d", &value);
    printf("Nhap vi tri can them: ");
    scanf("%d", &addIndex);
    if (addIndex < 0 || addIndex >= 100) {
        printf("Vi tri can them khong hop le!\n");
        return 1;
    }
    if (addIndex >= currentLength) {
        arr[addIndex] = value;
        currentLength = addIndex + 1;
    } else {
        for (int i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = value;
        currentLength++;
    }
    printf("Mang sau khi them phan tu:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
