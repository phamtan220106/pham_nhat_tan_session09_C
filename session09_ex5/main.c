#include <stdio.h>
#include <stdlib.h>
#define N 100000
#include <math.h>
int main()
{
    int Arr[N],menu,currentlength,tong,max=Arr[0],min=Arr[0],uoc,exame,scout,index,value;
    printf("pham_nhat_tan_session09_ex5\n");
    while(1){
        printf("1. nhap va gan gia tri tro mang.\n");
        printf("!1. thoat!!!.\n");
        printf(" lua chon cua ban: ");
        scanf("%d",&menu);
        if(menu==1){
            printf("nhap so phan tu cua mang: ");
            scanf("%d",&currentlength);
            for(int i=0;i<currentlength;i++){
                scanf("%d",&Arr[i]);
            }
            while(1){
                printf("\n");
                printf("MENU\n");
                printf("1. in ra cac phan tu dang su li.\n");
                printf("2. in ra gia tri cac phan tu chan va tinh tong.\n");
                printf("3. in ra max va min co trong mang.\n");
                printf("4. in cac phan tu la so nguyen to trong mang.\n");
                printf("5. nhap vao mot so va in ra so phan tu do co trong mang.\n");
                printf("6. them mot phan tu vao vi tri chi dinh.\n");
                printf("7. thoat!!\n.");
                printf(" lua chon cua ban: ");
                scanf("%d",&menu);
                switch(menu){
                    case 1:
                        printf("\n");
                        for(int i=0; i<currentlength;i++){
                            printf("%d ",Arr[i]);
                        }
                        printf("\n");
                        break;
                    case 2:
                        printf("\n");
                        tong=0;
                        printf("cac phan tu chan va gia tong cua chung la:\n");
                        for(int i=0; i<currentlength;i++){
                            if(Arr[i]%2==0){
                                printf("%d ",Arr[i]);
                                tong+=Arr[i];
                            }
                        }
                        printf("\ntong cac phan tu chan la: %d.",tong);
                        printf("\n");
                        break;
                    case 3:
                        printf("\n");
                        for(int i=0;i<currentlength;i++){
                            if(Arr[i]>max){
                                max=Arr[i];
                            }else{
                                min=Arr[i];
                            }
                        }
                        printf("gia tri lon nhat la: %d\n",max);
                        printf("gia tri nho nhat la: %d\n",min);
                        break;
                    case 4:
                        printf("\n");
                        tong=0;
                        uoc=0;
                        printf("cac so nguyen to co trong mang la: \n");
                        for(int i=0;i<currentlength;i++){
                            uoc=0;
                            for(int j=2;j<sqrt(i);i++){
                                if(Arr[i]%j==0){
                                    uoc++;
                                    break;
                                }
                            }
                            if(uoc==0){
                                printf("%d ",Arr[i]);
                                tong+=Arr[i];
                            }
                        }
                        printf("tong cac so nguyen to la: %d\n",tong);
                        printf("\n");
                        break;
                    case 5:
                        printf("\n");
                        printf("nhap vao gia tri muon kiem tra: ");
                        scanf("%d",&exame);
                        scout=0;
                        for(int i=0;i<currentlength;i++){
                            if(Arr[i]==exame){
                                scout++;
                            }
                        }
                        printf(" so phan tu %d co trong mang la: %d\n",exame,scout);
                        printf("\n");
                    case 6:
                        printf("\n");
                        printf("nhap vi tri muon them: ");
                        scanf("%d",&index);
                        printf("nhap gia tri can them: ");
                        scanf("%d",&value);
                        for(int i=currentlength;i>index;i--){
                            Arr[i]=Arr[i-1];
                        }
                        Arr[index]=value;
                        for(int i=0;i<=currentlength;i++){
                            printf("%d ",Arr[i]);
                        }
                        printf("\n");
                    case 7:
                        return 0;
                    default:
                        printf("lua chon khong hop le!!!\n");
                        break;
                }
            }
        }else{
            return 0;
        }
    }
    printf("Hello world!\n");
    return 0;
}
