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
	int deleteIndex;
    printf("Moi ban nhap vi tri can xoa: ");
    scanf("%d",&deleteIndex);
    if(deleteIndex <0 ||deleteIndex >= currentLength)
	{
        printf("Vi tri ko hop le \n");
        return 1;
    }
    else
    {
    	for (int i = deleteIndex; i < currentLength-1 ; ++i) 
        {
            arr[i] = arr[i+1];
        }
        currentLength--;
        printf("Xoa thanh cong");
	}
	printf("Mang sau khi xoa: ");
	for(int i=0;i<currentLength;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
