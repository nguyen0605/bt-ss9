#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int arr[100]={};
	int currentLength, addIndex, addValue;
	printf("Nhap vao so phan tu muon nhap: ");
	scanf("%d",&currentLength);
	if(currentLength<0 || currentLength>=100)
	{
		printf("So phan tu khong hop le!");
		return 1;
	}
	for(int i=0; i<currentLength; i++)
	{
		printf("Nhap vao phan tu arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	printf("Nhap vao vi tri muon chen vao mang: ");
	scanf("%d",&addIndex);
	if(addIndex<0 || addIndex>99)
	{
		printf("Vi tri khong hop le!");
		return 1;
	}
	printf("Nhap gia tri muon chen: ");
	scanf("%d",&addValue);
	if(addIndex>currentLength)
	{
		addIndex=currentLength;
	}
	else if(addIndex<0)
	{
		addIndex=0;
	}
	for(int i=currentLength;i>addIndex;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[addIndex]=addValue;
	currentLength++;
	printf("Mang sau khi chen: ");
	for(int i=0;i<currentLength;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
