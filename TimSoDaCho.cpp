#include<iostream>
using namespace std;

int main(){
	int  GivenNumber=40;
	int  NumberEntered;
	printf("DOAN SO BAT KI! \n");
	do{
		printf("Moi ban nhap vao 1 so bat ki: ");
	scanf(" %d",&NumberEntered);
		if(NumberEntered>GivenNumber){
			printf("So ban vua nhap lon hon so bi mat!.Hay thu lai \n");
		}
		else if(NumberEntered<GivenNumber){
			printf("So ban vua nhap nho hon so bi mat!.Hay thu lai \n");
		}
		else
			printf("Chuc mung ban da doan dung so can tim! \n");
		}
while (NumberEntered != GivenNumber);
return 0;
}
