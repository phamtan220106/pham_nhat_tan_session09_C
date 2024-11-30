#include <stdio.h>
int main() {
    printf("pham_nhat_tan_sesion09_ex2\n");
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int index, newValue;
    printf("Nhap vi tri can sua (0-9): ");
    scanf("%d", &index);
    if (index < 0 || index >= 10) {
        printf("Vi tri khong hop le!\n");
        return 0;
    }
    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);
    arr[index] = newValue;
    printf("Mang sau khi sua: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
