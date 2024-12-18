#include<stdio.h>
int main(){
	int n, a,b,c;
	float avg;
	do{
	printf("MENU\n");
	printf("1. Nhap ba so\n ");
	printf("2. tong ba so\n");
	printf("3. Trung binh cong ba so\n");
	printf("4. So nho nhat \n");
	printf("5. So lon nhat\n");
	printf("6. thoat\n");
	printf(" moi ban nhap lua chon\n");
	scanf("%d",&n);
	switch (n) {
		case 1:
			printf(" moi ban nhap vao so a,b,c\n");
			scanf("%d %d %d",&a,&b ,&c);
			
		   break;
		case 2:
		  printf("tong cua ba so la %d \n",a+b+c);
			break;
		case 3:
			avg=(float)(a+b+c)/3;
			printf("trung bi cong cua ba so la\n",avg);
		     break;
		case 4 : 
		printf( " so nho nhat trong day la %d\n",a < b ? (a < c ? a : c) : (b < c ? b : c));
		break;
		   break;
	    case 5 :
	    		printf( " so nho nhat trong day la %d\n",a >b ? (a > c ? a : c) : (b > c ? b : c));
	    		break;
	    case 6  :
	    	printf(" chuong trinh da ket thuc\n");
	    	break;
		
		
		default:
			printf( " lua chon khong hoc le, vui long chon lai\n");
	
	}
}while(n !=6);
return 0;
}
