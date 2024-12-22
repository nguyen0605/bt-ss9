#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int arr[10]={0,-3,5,23,-11,4,8,14,9,-3};
	int index,value;
	printf("Mang hien tai: ");
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nNhap vao vi tri can sua: ");
	scanf("%d",&index);
	if(index<0 || index>10)
	{
		printf("Vi tri khong hop le!");
		return 1;
	}
	printf("Nhap vao gia tri moi: ");
	scanf("%d",&value);
	arr[index-1]=value;
	printf("Mang sau khi sua: ");
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
