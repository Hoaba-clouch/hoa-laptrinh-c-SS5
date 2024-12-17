#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	int sum=0;
	printf("Hay nhap vao 1 so nguyen duong: ");
	scanf(" %d",&n);
	for(int i=1;i<=n;i++)
	{
	sum +=i;
}
	printf("Tong tu 1 den N la: %d",sum);
return 0;
}
