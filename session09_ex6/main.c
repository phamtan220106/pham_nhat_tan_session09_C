#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,col,menu,tong,rong=4,tich,x,max=0,volume;
    printf("pham-nhat_tan_session09_ex6.\n");
    while(1){
        printf("1. nhap va gan gia tri tro mang.\n");
        printf("!1. thoat!!!.\n");
        printf(" lua chon cua ban: ");
        scanf("%d",&menu);
        if(menu==1){
            printf("nhap so hang: ");
            scanf("%d",&row);
            printf("nhap so cot: ");
            scanf("%d",&col);
            int Arr[row][col];
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    scanf("%d",&Arr[i][j]);
                }
                printf("\n");
            }
            while(1){
                printf("\n");
                printf("MENU\n");
                printf("1.in cac phan tu cua mang theo ma tran.\n");
                printf("2.in cac phan tu le va tinh tong.\n");
                printf("3.in cac phan tu nam tren duong bien va tinh tich.\n");
                printf("4.in cac phan tu nam tren duong cheo chinh.\n");
                printf("5.in cac phan tu nam tren duong cheo phu.\n");
                printf("6.in dong co tong cac gia tri lon nhat.\n");
                printf("7.thoat!!.\n");
                printf("8. home!.\n");
                printf("nhap lua chon cua ban: ");
                scanf("%d",&menu);
                printf("\n");
            if(menu==8){
                break;
            }else{
                switch(menu){
                case 1:
                    printf("\n");
                    printf("MA TRAN:");
                    for(int i=0;i<row;i++){
                        for(int j=0;j<col;j++){
                            printf("%d ",Arr[i][j]);
                        }
                        printf("\n");
                    }
                    break;
                case 2:
                    printf("\n");
                    tong=0;
                    printf("cac gia tri le:\n");
                    for(int i=0;i<row;i++){
                        for(int j=0;j<col;j++){
                            if(Arr[i][j]%2!=0){
                                printf("%*d ",rong,Arr[i][j]);
                                tong+=Arr[i][j];
                            }else{
                                printf("%*c",rong,' ');
                            }
                        }
                        printf("\n");
                    }
                        printf("tong cac gia tri le la: %d\n",tong);
                        printf("\n");
                        break;
                case 3:
                    printf("\n");
                    tich=1;
                    printf("cac gia tri nam tren duong bien: MA TRAN \n");
                    for(int i=0;i<row;i++){
                        for(int j=0;j<col;j++){
                            if(i==0 || i==row-1 || j==0 || j==col-1){
                                printf("%*d",rong,Arr[i][j]);
                                tich*=Arr[i][j];
                            }else{
                                printf("%*c",rong,' ');
                            }
                        }
                        printf("\n");
                    }
                    printf("tich cac phan tu do la: %d",tich);
                    printf("\n");
                    break;
                case 4:
                    printf("\n");
                    if(row<col){
                        col=row;
                    }else{
                        row=col;
                    }
                    printf("cac gia tri nam tren duong cheo: MA TRAN \n");
                    for(int i=0;i<row;i++){
                        for(int j=0;j<col;j++){
                            if(i==j){
                                printf("%*d",rong,Arr[i][j]);
                            }else{
                                printf("%*c",rong,' ');
                            }
                        }
                        printf("\n");
                    }
                    printf("\n");
                    break;
                case 5:
                    printf("\n");
                    if(row<col){
                        x=row;
                    }else{
                        x=col;
                    }
                    printf("cac gia tri nam tren duong cheo: MA TRAN \n");
                    for(int i=0;i<x;i++){
                        for(int j=0;j<x;j++){
                            if(i+j==x-1){
                                printf("%*d",rong,Arr[i][j]);
                            }else{
                                printf("%*c",rong,' ');
                            }
                        }
                        printf("\n");
                    }
                    printf("\n");
                    break;
                case 6:
                    printf("\n");
                    max=0;
                    for(int i=0;i<row;i++){
                            volume=0;
                        for(int j=0;j<col;j++){
                            volume+=Arr[i][j];
                        }
                        if(max<volume){
                            max=volume;
                            x=i;
                        }
                    }
                    printf("dong co tong cac so lon nhat la: %d\n",x);
                    for(int i=0;i<x;i++){
                        for(int j=0;j<x;j++){
                            if(i==max){
                                printf("%*d",rong,Arr[i][j]);
                            }else{
                                printf("%*c",rong,' ');
                            }
                        }
                    }
                    printf("tong la: %d\n",max);
                    printf("\n");
                    break;
                case 7:
                    return 0;
                default:
                    printf("lua chon khong hop le!!\n");
                    break;
                }
            }
            }
        }else{
            return 0;
        }
    }
    printf("Hello world!\n");
    return 0;
}
