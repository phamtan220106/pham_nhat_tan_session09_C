#include <stdio.h>
#define MAX_SIZE 100

int main() {
    printf("pham_nhat_tan_sesion09_ex3\n");
    int arr[MAX_SIZE];
    int currentLength = 0;
    int choice;
    while(1){
        printf("1 nhap vao gia tri cua mang:\n");
        printf("6 thoat:\n");
        printf("moi nhap lua chon; ");
        scanf("%d",&choice);
        if(choice==1){
            printf("Nhap so phan tu: ");
            scanf("%d", &currentLength);
            if (currentLength > MAX_SIZE) {
                printf("So phan tu nhap vao vuot qua kich thuoc mang!\n");
                currentLength = 0;
            } else {
                    for (int i = 0; i < currentLength; i++) {
                        printf("Nhap phan tu thu %d: ", i + 1);
                        scanf("%d", &arr[i]);
                    }
                }
            while (1) {
            printf("MENU\n");
            printf("1. Hien thi mang\n");
            printf("2. Them phan tu\n");
            printf("3. Sua phan tu\n");
            printf("4. Xoa phan tu\n");
            printf("5. Thoat\n");
            printf("Lua chon cua ban: ");
            scanf("%d", &choice);
            switch (choice) {
                case 1:
                    printf("Mang: ");
                    for (int i = 0; i < currentLength; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                    break;
                case 2:
                    if (currentLength >= MAX_SIZE) {
                        printf("Mang da day, khong the them phan tu!\n");
                    } else {
                        int value, position;
                        printf("Nhap gia tri can them: ");
                        scanf("%d", &value);
                        printf("Nhap vi tri can them: ");
                        scanf("%d", &position);
                        if (position < 0 || position > currentLength) {
                            printf("Vi tri khong hop le!\n");
                        } else {
                            for (int i = currentLength; i > position; i--) {
                                arr[i] = arr[i - 1];
                            }
                            arr[position] = value;
                            currentLength++;
                        }
                    }
                    for(int i=0;i<currentLength;i++){
                        printf("%d ",arr[i]);
                    }
                    printf("\n");
                    break;
                case 3:
                    {
                        int position, newValue;
                        printf("Nhap vi tri can sua: ");
                        scanf("%d", &position);
                        if (position < 0 || position >= currentLength) {
                            printf("Vi tri khong hop le!\n");
                        } else {
                            printf("Nhap gia tri moi: ");
                            scanf("%d", &newValue);
                            arr[position] = newValue;
                        }
                    }
                    for(int i=0;i<currentLength;i++){
                        printf("%d ",arr[i]);
                    }
                    printf("\n");
                    break;
                case 4:
                    {
                        int position;
                        printf("Nhap vi tri can xoa: ");
                        scanf("%d", &position);
                        if (position < 0 || position >= currentLength) {
                            printf("Vi tri khong hop le!\n");
                        } else {
                            for (int i = position; i < currentLength - 1; i++) {
                                arr[i] = arr[i + 1];
                            }
                            currentLength--;
                        }
                    }
                    for(int i=0;i<currentLength;i++){
                        printf("%d ",arr[i]);
                    }
                    printf("\n");
                    break;
                case 5:
                    return 0;
                default:
                    printf("Lua chon khong hop le!\n");
        }
    }
        }else{
            return 0;
        }
    }

    return 0;
}
