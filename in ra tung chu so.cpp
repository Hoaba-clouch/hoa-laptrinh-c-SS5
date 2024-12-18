#include<stdio.h>
int main(){
	int n, num,check;
	printf("moi ban nhap so nguyen n");
	scanf("%d",&n);
	check=n; 
 while(check !=0){
 	num= check%10;
 	printf("%d \n",num);
 	check = check /10;
 }
 return 0;
}
