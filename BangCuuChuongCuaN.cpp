#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	int multiplication;
	printf("Hay nhap vao 1 so nguyen duong: ");
	scanf(" %d",&n);
	printf("Bang cuu chuong cua N la: \n");
	for(int i=1;i<=10;i++)
	{
		multiplication=n*i;

	printf(" %d x %d =%d \n",n,i,multiplication);}
	
return 0;
}
