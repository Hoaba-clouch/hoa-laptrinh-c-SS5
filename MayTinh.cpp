#include<stdio.h>
int main(){
	int a,b,n ;
	float thuong;
	printf(" moi ban nhap vao so a va b\n ");
	scanf("%d%d", &a ,&b );
	do{
		printf("CALCULATOR\n");
		printf("1. Tong hai so\n ");
		printf("2. Hieu hai so \n");
		printf("3. Tich hai so \n");
		printf("4. Thuong hai so \n");
		printf("5. Thoat \n");
		printf(" moi ban nhap lua chon");
		scanf("%d",&n);
		switch (n) {
			case 1:
				printf("Tong cua hai so vua nhap la %d\n ",a + b );
				break;
			case 2:
				printf("Hieu cua hai so la %d \n ",a-b);
				break;
			case 3:
			    printf("tich cua hai so la %d \n ",a*b);
				break;
	    	case 4:
	    		thuong=(float)a / b;
	    		 if (b == 0) {
				 printf("khong the chia cho 0.\n");
	    		 }else{
				printf("Thuong cua hai so la %.2f \n ",thuong);// luc dau em chay loi nen doi thanh bien lam xong moi thay chua doi d thanh f nen no moi loi kh r dap an
	    		 }
				break;
			case 5:
				printf("Chuong trinh ket thuc ");
				break;			
			default:
				printf( " lua chon khong hop le vui long nhap lai");
				break;
		}
	}while(n!=5);
	  return 0;
		}
		
