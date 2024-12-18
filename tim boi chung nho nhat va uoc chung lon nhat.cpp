#include<stdio.h>
int main(){
	int a,b;
	printf(" moi ban nhap vao hai so a va b \n");
	scanf("%d%d",&a,&b);
	if(a>=0 && b>=0){
		if(a==0&&b==0){
			printf("khong co uoc chung lon nhat va boi chung nho nhat " );
		}else if(a==0|| b==0){
			printf(" UCLN cua hai so tren la %d",(a==0)?b:a);
		}else{
			int bc = a*b;
			while(b !=0 ){
			int temb=b;
			b=a%b;
			a = temb ;
			}
			printf("uoc chung lon nhat cua hai so la %d\n",a);
			printf("boi chung nho nhat cua hai so la %d\n",bc/a);
			
		}
		
	}else{
		printf(" khong hop le moi ban nhap lai so a,b");
	}
	return 0;
}
